#include <QCoreApplication>

#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject* parent = new QObject();
    ExampleClass* objMyClass = new ExampleClass(parent);
    objMyClass->startToWait();

    return a.exec();
}
