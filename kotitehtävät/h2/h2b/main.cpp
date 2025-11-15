#include <vector>

#include "car.h"

using namespace std;

int main() {
    vector<Car> carList;
    carList.emplace_back("Toyota", "Corolla", 2022);
    carList.emplace_back("Ford", "Mustang", 2019);
    carList.emplace_back("BMW", "330i", 2023);

    carList.at(1).printData();

    for (Car &car : carList) {
        car.printData();
    }
}
