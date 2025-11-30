#include "car.h"

int main() {
    unique_ptr<Car> objCar = make_unique<Car>("Corolla", "Toyota");
    objCar->setEngine();
    objCar->setWheels();
    objCar->printDetails();

    return 0;
}
