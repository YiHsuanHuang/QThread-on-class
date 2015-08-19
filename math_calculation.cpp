#include "math_calculation.h"

math_calculation::math_calculation()
{

}

void math_calculation::run()
{
    qDebug() << "running";

    QTime t;
    t.start();
    QList<int> randomNum;
    for(int i=0;i<10240;i++)
    {
        randomNum.append(rand()%10000);
    }
    for(int m=0;m<randomNum.size()-1;m++)
    {
        for(int n=m+1;n<randomNum.size();n++)
        {
            if(randomNum.at(m)>randomNum.at(n))
            {
                int temp;
                temp = randomNum[m];
                randomNum[m] = randomNum[n];
                randomNum[n] = temp;
            }
        }
        qDebug() << m;
    }
    qDebug() << randomNum << t.elapsed();
}

//RS232
