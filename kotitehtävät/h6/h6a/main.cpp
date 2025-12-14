#include <iostream>

#include "myclass.h"

using namespace std;

int main() {
    QObject* parent = new QObject();
    MyClass* objMyClass = new MyClass(parent);
    objMyClass->raiseMySignal();
}
