#ifndef APERIODIC_UNIT_H
#define APERIODIC_UNIT_H
#include <integral.h>
#include <QObject>

class Aperiodic_unit: public QObject
{
    Q_OBJECT
public:
  explicit Aperiodic_unit(QObject *parent = 0);
    ~Aperiodic_unit();
    float new_value( float input, float T, float k, float t);
private:
    Integral *I;
    float feedback;
};

#endif // APERIODIC_UNIT_H
