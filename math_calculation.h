#ifndef MATH_CALCULATION_H
#define MATH_CALCULATION_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <QList>
#include <QTime>

class math_calculation : public QThread
{
public:
    math_calculation();

private:

    void run();
};

#endif // MATH_CALCULATION_H
