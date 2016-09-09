#include "Test01.h"

Test01::Test01(QObject *parent) : QObject(parent)
{

}

void Test01::writeFile(QString sFile, int iLine)
{

    QFile file(sFile);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;

    QString sBase="1234 %1 0 %2 %3\n";

    QTime time;
    time.setHMS(9,0,0,0);

    QString sData;
    for(int i=0;i<=iLine;i++)
    {
        int iCost=qrand()%6+20;
        int iNums=qrand()%30+1;
        sData.append(sBase.arg(time.toString("HH:mm:ss.z")).arg(iCost).arg(iNums));
        time=time.addSecs(5).addMSecs(30);
    }

    file.write(sData.toStdString().c_str());
    file.close();

}
