#include "car.h"

Car::Car(const string &brand, const string &model, int yearModel) {
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData() {
    cout << brand << " " << model << " " << yearModel << endl;
}
