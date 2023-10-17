#include <QCoreApplication>
#include <worked.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   Worked work;
   work.run();
    return a.exec();
}
