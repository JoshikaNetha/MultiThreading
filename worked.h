#ifndef WORKED_H
#define WORKED_H
#include <QTimer>
#include <QObject>
#include <mythread.h>
class Worked : public QObject
{
    Q_OBJECT
public:
    explicit Worked(QObject *parent = nullptr);
        void run();
        void calculate(int one,int two);
        void creatingNewThread();

public slots:
    void method();
    void methodSecond();
    void runSecondThread();

private:
    Mythread *thread=new Mythread();
    Mythread *secondThread=new Mythread();


};

#endif // WORKED_H
