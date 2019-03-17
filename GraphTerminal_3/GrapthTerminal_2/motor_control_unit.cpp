#include "motor_control_unit.h"
#define loop_interval 10
#define filter_interval 1
#define deep_filtering 2
#define dpwm 10
int n = 0;
long container = 0;
float Tf = 10;
int stop_searching = 0;
float min_cur = 0;
Motor_control_unit::Motor_control_unit(QObject *parent) : QObject(parent)
{
   I_w = new Integral();
   Sp = new Aperiodic_unit();
   loop_timer = new QTimer();
   loop_timer->setInterval(loop_interval);
   filter_timer = new QTimer();
   filter_timer->setInterval(filter_interval);
   new_pwm_value = 0;
   new_speed_value = 0;
   motor_control_speed = 0;
   motor_control_voltage = 0;
   motor_control_current = 0;
   Motor_settings.max_pwm = 0xFFFF;
   Motor_settings.phase_resistance = 1;
   Motor_settings.scheme_connection = star;
   Motor_settings.phase_induction = 1;
   Motor_settings.voltage = 30;
   Motor_settings.pair_poles = 8;
   Motor_settings.CE = 1;
   Motor_settings.CM = 1;
   Motor_settings.control_type = SVPWM;
   Motor_work_parameters.full_resistance = 1;
   Motor_work_parameters.Ke = 1;
   Motor_work_parameters.Kpwm = 1;
   Motor_work_parameters.no_load_speed = 1;
   Motor_work_parameters.filtering_current = 0;
   Motor_work_parameters.pwm0 = 0;
   Motor_work_parameters.mes_current[0] = 0;
   Motor_work_parameters.mes_current[1] = 0;
   Motor_work_parameters.mes_current[2] = 0;
   Motor_work_parameters.Kcur = 100;
   Motor_work_parameters.T1 = 0.01;
   connect(loop_timer, SIGNAL(timeout()),this, SLOT(new_control_calculate()));
   connect(filter_timer, SIGNAL(timeout()),this, SLOT(current_filter()));
   loop_timer->start();
   filter_timer->start();

}

Motor_control_unit::~Motor_control_unit()
{
    loop_timer->stop();
}
void Motor_control_unit::new_speed_calculate()
{
    float m_loop_interval = 0.01;
  //  qDebug() << "m_loop_interval" << m_loop_interval;
    new_speed_value = Sp->new_value(motor_control_speed,Motor_work_parameters.T1,1,m_loop_interval);
  //  qDebug() << "new_speed_value" << new_speed_value;
}

void Motor_control_unit::new_pwm_calculate()
{
    new_pwm_value = motor_control_voltage;
}
void Motor_control_unit::current_filter()
{
  ;
}
void Motor_control_unit::machine_parameters_setting()
{
    if (Motor_settings.control_type == SVPWM)
    {
        Motor_work_parameters.Ke = 2;
    }
    if (Motor_settings.scheme_connection == star)
    {
        Motor_work_parameters.full_resistance = 2*(Motor_settings.phase_resistance);
        Motor_work_parameters.no_load_speed = (2*(Motor_settings.voltage))/((Motor_work_parameters.Ke)*(Motor_settings.CE));
        Motor_work_parameters.Kpwm = (Motor_settings.max_pwm)/(Motor_work_parameters.no_load_speed);
    }
}
void Motor_control_unit::new_control_calculate()
{
    Motor_work_parameters.T1 = 0.1;// + new_pwm_value;
  //  qDebug() << "T1" << Motor_work_parameters.T1;
    new_speed_calculate();
    new_pwm_calculate();
}
