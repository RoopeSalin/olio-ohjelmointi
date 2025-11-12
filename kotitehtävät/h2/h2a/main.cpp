#include <iostream>
#include <memory>

#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main() {
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2022);
    car.printData();

    Rectangle* rect = new Rectangle();
    rect->setWidth(5.7);
    rect->setHeight(8.2);
    cout << "area: " << rect->getArea() << endl;
    cout << "circumference: " << rect->getCircum() << endl;
    delete rect;
    rect = nullptr;

    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Teppo Testi");
    student->setStudentNumber(435247);
    student->setAverage(4.3);

    cout << "name: " << student->getName() << endl;
    cout << "student number: " << student->getStudentNumber() << endl;
    cout << "average: " << student->getAverage() << endl;
}
