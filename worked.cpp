#include "worked.h"
#include "QThread"
#include <QDebug>
Worked::Worked(QObject *parent)
    : QObject{parent}
{

}

void Worked::run()
{
    qDebug()<<"timeup";
    QTimer *timer = new QTimer();
    thread->run();
    timer->start(1000);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(method()));
    qDebug()<<"timeup";
    timer->stop();
}

void Worked::creatingNewThread()
{


}
void Worked::method()
{
    qDebug()<<"method started";
    thread->quit();
//    runSecondThread();
}

void Worked::methodSecond()
{
    qDebug()<<"method started";
    secondThread->quit();
}

void Worked::runSecondThread()
{
    secondThread->start();
    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(methodSecond()));
    timer->start(10000);
}
