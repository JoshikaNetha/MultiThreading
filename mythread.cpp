#include "mythread.h"
#include <QDebug>
Mythread::Mythread()
{

}

void Mythread::run()
{
    int i=0;
    while(true)
    {
        QThread::msleep(10000);
        if(i==10){
            break;
        }
       qDebug()<<i++<<" first thread";
    }
}

void Mythread::start()
{
    int k=0;
    while(k<=1000)
    {
        qDebug()<<k++<<" second thread";

    }
}
