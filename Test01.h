#ifndef TEST01_H
#define TEST01_H

#include <QObject>
#include <QFile>
#include <QTime>
#include <QDebug>
#include <QTextStream>
class Test01 : public QObject
{
    Q_OBJECT
public:
    explicit Test01(QObject *parent = 0);
    void writeFile(QString sFile,int iLine);
signals:

public slots:
};

#endif // TEST01_H
