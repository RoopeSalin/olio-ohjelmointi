#include "car.h"

Car::Car() {}

void Car::printData() {
    cout << "brand: " << brand << endl;
    cout << "model: " << model << endl;
    cout << "year model: " << yearModel << endl;
}

void Car::setBrand(const string &newBrand) {
    brand = newBrand;
}

void Car::setModel(const string &newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}
