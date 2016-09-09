#include <QCoreApplication>
#include "Test01.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test01 t;
    t.writeFile("./tec",10000);
    return a.exec();
}
