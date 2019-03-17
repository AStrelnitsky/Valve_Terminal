#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
#include <QFile>
#include <QDir>

bool inc_message_flag = false;
int count = 0;
int speed_slider, RX_byte_counter = 0;
int median_current = 0;
char inc_data;
char flag = 0;
char COM_number;
char k = 0;
char crc = 0;
unsigned char crc1 = 0;
unsigned char lost_connection = 0;
long dt = 65535/80000000;
QString COM_Name;
RS485_Config rs485_config;

Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);


    // Default config///
    rs485_config.address = DEFAULT_VALVE_CONTROLLER_ADDRESS;
    rs485_config.number_of_servos = NUMBER_OF_SERVOS;
    rs485_config.crc_length = 1;
    rs485_config.crc_type = XOR_1;
    rs485_config.baudrate = DEFAULT_BAUDERATE;
    rs485_config.main_protocol_mode = CONTROL_MODE;
    rs485_config.function_code = MAIN_MODE_1;
    // EN_OF_CONFIG/////

    ComTxTimer.setInterval(TX_TIMEOUT);
    ComRxTimer.setInterval(RX_TIMEOUT);
    GlobalTimer.setInterval(1);
    connect(&ComTxTimer, SIGNAL(timeout()), this, SLOT(ComMessageOut()));
    connect(&ComRxTimer, SIGNAL(timeout()), this, SLOT(ComWatchdog()));
    connect(&GlobalTimer, SIGNAL(timeout()),this, SLOT(GlobalTime()));
    ui->TextScreen->appendPlainText("Number of serial ports: " + QString::number(QSerialPortInfo::availablePorts().count()));
    curr_plot = new Plot(this);
    curr_plot->SetColor(Qt::blue);
    curr_plot->SetTitle("Current, 0.1 A");
    vel_plot = new Plot(this);
    vel_plot->SetColor(Qt::green);
    vel_plot->SetTitle("Speed, rpm");
    ui->verticalLayout_6->addWidget(curr_plot);
    ui->verticalLayout_6->addWidget(vel_plot);
    GlobalTimer.start();

  //log = new QFile(QDir::currentPath() + "/log.txt");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::ComMessageIn()
{
    lost_connection = 1;
    int length_buf = 0;
    MessageIn = ComPort->readAll();
    d_time = RX_TIMEOUT - ComRxTimer.remainingTime();
    ComRxTimer.stop();
    length_buf = MessageIn.length();
    ui->TextScreen->appendPlainText("COM message recieved");
    ui->TextScreen_4->appendPlainText("Start of incomming");

    for ( int i = 0 ; i < length_buf; i++ ) {

     ui->TextScreen_4->appendPlainText(QString::number((unsigned char) MessageIn[i],16));

    rs485_config.rx_buffer[i] = (unsigned char) MessageIn[i];

     MessageIn[i] = 0;

    }

    RX_byte_counter = length_buf;

    length_buf = 0;


  //  if (RX_byte_counter >= RX_MESSAGE_SIZE){

     ui->TextScreen_4->appendPlainText("End of incomming");
     ParseMessage(rs485_config.rx_buffer, RX_byte_counter);
     RX_byte_counter = 0;
     ComRxTimer.stop();
     // }
}
                                                                                                                                                                       
void Widget::ComMessageOut()
{

    unsigned int angles[rs485_config.number_of_servos];
    unsigned char tx_local_length = ((rs485_config.number_of_servos) << 1) + (rs485_config.crc_length) + 5;
    unsigned int crc = 0;

    rs485_config.tx_buffer[STROB_BYTE] = STROB;
    rs485_config.tx_buffer[HEADER_BYTE] = HEADER;
    rs485_config.tx_buffer[ADDRESS_BYTE] = rs485_config.address;
    rs485_config.tx_buffer[LENGTH_BYTE] = tx_local_length - 4;
    rs485_config.tx_buffer[FUNCTION_CODE] = rs485_config.function_code;

    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_0_L_CM]     = ( unsigned char )( rs485_config.angles[0] & 0x00FF );
    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_0_H_CM] = ( unsigned char )( rs485_config.angles[0] >> 8 );
    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_1_L_CM] = ( unsigned char )( rs485_config.angles[1] & 0x00FF );
    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_1_H_CM] = ( unsigned char )( rs485_config.angles[1] >> 8 );
    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_2_L_CM] = ( unsigned char )( rs485_config.angles[2] & 0x00FF );
    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_2_H_CM] = ( unsigned char )( rs485_config.angles[2] >> 8 );
    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_3_L_CM] = ( unsigned char )( rs485_config.angles[3] & 0x00FF );
    rs485_config.tx_buffer[SERVO_GOAL_ANGLE_3_H_CM] = ( unsigned char )( rs485_config.angles[3] >> 8 );

    crc = CalculateCRC(rs485_config.tx_buffer, tx_local_length, rs485_config.crc_type);

    rs485_config.tx_buffer[(tx_local_length - 1)] = ( unsigned char) (  crc & 0x00FF );

    ui->TextScreen_2->appendPlainText( "Start of send" );

    for ( int i = 0 ; i < tx_local_length ; i++ )
    {
      MessageOut.append( rs485_config.tx_buffer[i]);
      ui->TextScreen_2->appendPlainText( QString::number(rs485_config.tx_buffer[i],16) );
       rs485_config.tx_buffer[i] = 0;
    }

  //qDebug() << MessageOut;
    ui->TextScreen_2->appendPlainText( "End of send" );
    ComPort->write(MessageOut);
    MessageOut.clear();
    ui->TextScreen->appendPlainText("COM message sent");

    ComRxTimer.start();
}
void Widget::ComWatchdog()
{
   ++ lost_connection;
    ComRxTimer.stop();
    ui->TextScreen->appendPlainText("Error: no answer recieved in time");

    if (lost_connection >= 14)
    {
        ui -> TextScreen_4->appendPlainText("CONNECTION IS LOST!!!!!!!");
        lost_connection = 0;
    }
}

void Widget::on_BtnConnect_clicked()
{
   // qDebug() << "Connected =" << Connected;
    if (Connected)
    {
     // qDebug() << "Connected";
        ComTxTimer.stop();
        ComRxTimer.stop();
        Connected = false;
     // qDebug() << "Connected1";
        ComPort->flush();
        ComPort->close();  //Здесь программа валится в релизе
     // qDebug() << "Connected2";
        ui->TextScreen->appendPlainText("Disconnected");
        ui->BtnConnect->setText("CONNECT");
     // log->close();
      //GlobalTimer.stop();
    }
    else
    {
     // qDebug() << "disConnected";
        COM_number = ui->COM_Port->value();
        COM_Name = "COM" + QString::number(COM_number);
     // qDebug() << COM_Name;
        ComPort = new QSerialPort(COM_Name);
        if (ComPort->open(QIODevice::ReadWrite))
        {
            ComPort->setBaudRate(QSerialPort::Baud115200, QSerialPort::AllDirections);
            ComPort->setFlowControl(QSerialPort::NoFlowControl);
            ComPort->setDataBits(QSerialPort::Data8);
            ComPort->setParity(QSerialPort::NoParity);
            ComPort->setStopBits(QSerialPort::OneStop);
            connect(ComPort, SIGNAL(readyRead()), this, SLOT(ComMessageIn()));
            ui->TextScreen->appendPlainText("ComPort succesfully initialized");

            //GlobalTimer.start();
            qDebug() << "ComPort succesfully initialized";
        }
        else
        {
            ui->TextScreen->appendPlainText("Error!");
      //      qDebug() << "Error " << ComPort->error() << " occured";
        }

      //  Connected = false;
        ComTxTimer.start();
        Connected = true;
        ui->TextScreen->appendPlainText("Connected");
        ui->BtnConnect->setText("DISCON");
    }
    qDebug() << "Отсюда вышли";
}

unsigned int Widget::CalculateCRC(unsigned char *data, unsigned char length, CRC_TYPE crc)
{
    unsigned int accum_2 = 0;
    unsigned char accum_1 = 0;

    if (crc == XOR_2)
    {
        for (int i = 4; i < length; ++i)
        {
            accum_2 = accum_2 ^ data[i];
        }
        return accum_2;
    }
    else if (crc == XOR_1)
    {
        for (int i = 4; i < length; ++i)
        {
            accum_1 = accum_1 ^ data[i];
        }
        return (unsigned int) accum_1;
    }
}


void Widget:: ChannelControl( unsigned char * massive )
{


   if (massive[FUNCTION_CODE] == MAIN_MODE_1) // send servos angels and humidity
   {
      ui->TextScreen_4->appendPlainText("number of bytes is " + QString::number((massive[LENGTH_BYTE] = 3 + 2*(rs485_config.number_of_servos) + rs485_config.crc_length))) ;

      for (int i = 0; i < (rs485_config.number_of_servos); ++i)
      {
           rs485_config.sense_angles[i] = massive[FUNCTION_CODE + 2*i + 1] + massive[FUNCTION_CODE + 2*i + 2]; // current servo angles (10 bits)
      }
        curr_plot->UpdateValue(massive[FUNCTION_CODE + 2*(rs485_config.number_of_servos)],d_time); /// where will be write humidity data
        vel_plot->UpdateValue(massive[FUNCTION_CODE + 2*(rs485_config.number_of_servos) + 1],d_time); /// where will be write current consumption data
                        }
        /*     if (log->isOpen())
             {
                 qDebug() << "logs is open, ";
             if (data.isNull())
             {
                 data.append(QString::number(time,10));
                 data.append(" ");
                 data.append(QString::number(temp_proc,10));
                 data.append(" ");s
                 data.append(QString::number(temp,10));
                 data.append(" ");
                 data.append(QString::number(vel,10));
                 data.append(" ");
                 data.append(QString::number(current_buf,10));
                 data.append(" ");
                 data.append(QString::number((ui->spinBox->value()),10));
                 data.append(" ");
                 data.append(QString::number((ui->spinBox_2->value()),10));
                 data.append(" ");
                 data.append(QString::number((ui->SpeedSlider_1->value()),10));

             }
             }
             else qDebug() << "log is not open!";
             */
}
void Widget :: ParseMessage(unsigned char * massive, char length)
{
    unsigned int crc = CalculateCRC( massive, length, rs485_config.crc_type);
    //if( crc ) /*&& (length == RecMessageRes)*/)
    {
        ChannelControl( massive );
        inc_message_flag = true;
    }
    //else
    {
        inc_message_flag = false;
        ui -> TextScreen_4->appendPlainText("CHEK SUMM OR NUMBER OF BYTES IS NOT CORRECT !!!!!!!");
    }
        ui -> TextScreen_4->appendPlainText("number of bytes is " + QString::number(length));
    }

void Widget::on_radioButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
        ;
    }

}
void Widget::GlobalTime()
{
    ++time;
    ReadControl();
    ui->textEdit->append(QString::number(time,10));
 // log->write(data + "\r\n");
    data.clear();
}
void Widget::ReadControl()
{
    rs485_config.angles[0] = ( unsigned int ) (ui->SpeedSlider_1->value());
    rs485_config.angles[1] = ( unsigned int ) (ui->SpeedSlider_2->value());
    rs485_config.angles[2] = ( unsigned int ) (ui->SpeedSlider_3->value());
    rs485_config.angles[3] = ( unsigned int ) (ui->SpeedSlider_4->value());
}
void Widget :: on_STOP1_clicked()
{
    ui->SpeedBox1->setValue(0);
    ui->VelocityWindow_1->clear();
    ui->CurrentWindow_1->clear();

}
void Widget::on_STOP1_2_clicked()
{
    ui->SpeedBox1_2->setValue(0);
    ui->VelocityWindow_2->clear();
    ui->CurrentWindow_2->clear();

}

void Widget::on_STOP1_3_clicked()
{
    ui->SpeedBox1_3->setValue(0);
    ui->VelocityWindow_3->clear();
    ui->CurrentWindow_3->clear();

}

void Widget::on_STOP1_4_clicked()
{
    ui->SpeedBox1_4->setValue(0);
    ui->VelocityWindow_4->clear();
    ui->CurrentWindow_4->clear();

}


