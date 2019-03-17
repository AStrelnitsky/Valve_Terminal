#ifndef WIDGET_H
#define WIDGET_H

#include <QtCore>
#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <plot.h>

#define NUMBER_OF_SERVOS 4

#define RS485_RX_SIZE 0x1F
#define RS485_TX_SIZE 2*NUMBER_OF_SERVOS + 5

/*--------------INDEPENDED HEADERS------------*/
#define STROB_BYTE      0
#define HEADER_BYTE     1
#define ADDRESS_BYTE    2
#define LENGTH_BYTE     3
#define FUNCTION_CODE   4

#define STROB   0xFF
#define HEADER  0xFE

#define DEFAULT_VALVE_CONTROLLER_ADDRESS 0x7
/*--------------------------------------------*/
/*-------------SENDING MESSAGE STRUCTURE------*/
///////////////DEFINES MAIN PROTOCOL //////////

#define CONTROL_ONLY                    0x01
#define CONTROL_WITH_RESPONSE           0x02
#define MAIN_MODE_1                     0x03
#define MAIN_MODE_2                     0x04
#define MAIN_MODE_3                     0x05
#define MAIN_MODE_4                     0x06
#define SERVO_BYPASS                    0x0D

#define SETTING_ASK_DEVICE_TYPE         0x41
#define SETTING_ASK_DECIMAL_NUMBER      0x42
#define SETTING_ASK_SERIAL_NUMBER       0x49
#define SETTING_ASK_NUMBER_OF_SERVOS    0x4A

#define SERVO_GOAL_ANGLE_0_L_CM FUNCTION_CODE + 1
#define SERVO_GOAL_ANGLE_0_H_CM SERVO_GOAL_ANGLE_0_L_CM + 1
#define SERVO_GOAL_ANGLE_1_L_CM SERVO_GOAL_ANGLE_0_H_CM + 1
#define SERVO_GOAL_ANGLE_1_H_CM SERVO_GOAL_ANGLE_1_L_CM + 1
#define SERVO_GOAL_ANGLE_2_L_CM SERVO_GOAL_ANGLE_1_H_CM + 1
#define SERVO_GOAL_ANGLE_2_H_CM SERVO_GOAL_ANGLE_2_L_CM + 1
#define SERVO_GOAL_ANGLE_3_L_CM SERVO_GOAL_ANGLE_2_H_CM + 1
#define SERVO_GOAL_ANGLE_3_H_CM SERVO_GOAL_ANGLE_3_L_CM + 1
#define STATUS SERVO_GOAL_ANGLE_3_H_CM + 1

/*--------------------------------------------*/



/*-------------CONNECTION SETTINGS------------*/

#define RX_TIMEOUT 5
#define TX_TIMEOUT 30
#define DEFAULT_BAUDERATE 115200
/*--------------------------------------------*/
/*------------INCOMING MESSAGE STRUCTURE-------*/


/*--------------------------------------------*/

typedef enum
{
    CRC_NO,
    XOR_1,
    XOR_2
} CRC_TYPE;
typedef enum
{
    RS485_OK,
    RS485_ERR
} RS485_STATUS_TYPE;
typedef enum
{
    CONTROL_MODE = 0,
    SETTING_MODE,
    SERVICE_MODE
} MAIN_PROTOCOL_MODES;


struct RS485_Config
{
    unsigned int angles[NUMBER_OF_SERVOS], sense_angles[NUMBER_OF_SERVOS];
    unsigned char address, crc_length, number_of_servos;
    unsigned int baudrate;
    CRC_TYPE crc_type;
    unsigned char rx_buffer[RS485_RX_SIZE];
    unsigned char tx_buffer[RS485_TX_SIZE];
    int servos[NUMBER_OF_SERVOS];
    char rx_buffer_length, function_code;
    MAIN_PROTOCOL_MODES main_protocol_mode;
};



namespace Ui
{
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private Q_SLOTS:

   void ComMessageIn();
   void ComMessageOut();
   void ComWatchdog();
   void on_BtnConnect_clicked();
   void on_STOP1_clicked();
   void ChannelControl(unsigned char *);
   void ParseMessage( unsigned char *, char);
   void on_radioButton_clicked();
   void GlobalTime();
   void ReadControl();
   unsigned int CalculateCRC (unsigned char *data, unsigned char length, CRC_TYPE crc);


   void on_STOP1_2_clicked();

   void on_STOP1_3_clicked();

   void on_STOP1_4_clicked();


private:
   long time,time_s,d_time = 0;
    Ui::Widget *ui;

    QTimer
        ComTxTimer,
        ComRxTimer,
        GlobalTimer;
   Plot *temp_plot,
        *curr_plot,
        *kalman_curr_plot,
        *vel_plot;
    QSerialPort *ComPort;
    QFile *log;
    bool
        Connected;

    QByteArray
        data,
        MessageOut,
        MessageIn;

};

#endif // WIDGET_H
