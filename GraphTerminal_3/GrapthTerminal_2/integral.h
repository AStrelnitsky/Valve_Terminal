#ifndef INTEGRAL_H
#define INTEGRAL_H

#include <QObject>

class Integral: public QObject
{
        Q_OBJECT
private:
    float collector;
    float last_value;
    float new_out_value;
public:
    explicit Integral(QObject *parent = 0);
    ~Integral();
    float calculate_new_value(float t, float input_value);
    void flush();
};

#endif // INTEGRAL_H
