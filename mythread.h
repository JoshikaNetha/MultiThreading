#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QObject>

class Mythread : public QThread
{
    Q_OBJECT
public:
    Mythread();
   void run();
   void start();
};

#endif // MYTHREAD_H
