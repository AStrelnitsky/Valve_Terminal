#include "aperiodic_unit.h"
#include <QDebug>
Aperiodic_unit::Aperiodic_unit(QObject *parent) : QObject(parent)
{
    I = new Integral();
    feedback = 0;
}

Aperiodic_unit::~Aperiodic_unit()
{
    ;
}

float Aperiodic_unit::new_value(float input, float T, float k, float t)
{
    float loop = (I->calculate_new_value(t,(input - feedback)));
    float new_value = k*loop/T;
    feedback = loop/T;
    //qDebug() << "aperiodic value = " << new_value;
    return new_value;
}
