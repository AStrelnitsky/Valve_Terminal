#include "integral.h"
#include <QDebug>
Integral::Integral(QObject *parent) : QObject(parent)
{
    new_out_value = 0;
    collector = 0;
    last_value = 0;
}

Integral::~Integral()
{
    ;
}

float Integral::calculate_new_value(float t, float input_value)
{
   new_out_value = collector + t*(last_value + input_value)/2;
   last_value = input_value;
   collector = new_out_value;
   // qDebug() << "collector "<< new_out_value;
   // qDebug() << "integral value = "<< new_out_value;
   return new_out_value;
}
void Integral::flush()
{
    collector = 0;
}
