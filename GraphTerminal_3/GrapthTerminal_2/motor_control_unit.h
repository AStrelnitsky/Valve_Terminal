#ifndef MOTOR_CONTROL_UNIT_H
#define MOTOR_CONTROL_UNIT_H
#include <QObject>
#include <QTimer>
#include <QDebug>
#include <qmath.h>
#include <integral.h>
#include <aperiodic_unit.h>
#define star 1
#define SVPWM 1
#define six_state 2
class Motor_control_unit : public QObject
{
    Q_OBJECT
public:
    explicit Motor_control_unit(QObject *parent = 0);
    ~Motor_control_unit();
    float new_pwm_value;
    float new_speed_value;
    float motor_control_speed;
    float motor_control_voltage;
    float motor_control_current;
    struct motor_hard_parametrs
    {
        int max_pwm;
        float phase_resistance;
        char scheme_connection,pair_poles,control_type;
        float phase_induction;
        int voltage;
        float CE,CM;
    };
    motor_hard_parametrs Motor_settings;
    struct motor_soft_parameters
    {
        int no_load_speed;
        float full_resistance;
        float Ke;
        float Kpwm;
        float Kcur;
        float filtering_current;
        float mes_current[3];
        float T1;
        int pwm0;
    };
    motor_soft_parameters Motor_work_parameters;
    void machine_parameters_setting();

private:
QTimer *loop_timer;
QTimer *filter_timer;
int k1;
int corrected_current;
Integral *I_w;
Aperiodic_unit *Sp;
private Q_SLOTS:
void new_pwm_calculate();
void new_speed_calculate();
void new_control_calculate();
void current_filter();

};

#endif // MOTOR_CONTROL_UNIT_H
