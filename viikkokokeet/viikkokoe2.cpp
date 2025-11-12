/*
// tehtävä 1
#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
using namespace std;

class myClass {
private:
    string privateTextToPrint;

    void privateFunction();

protected:
    string protectedTextToPrint;

    void protectedFunction();

public:
    string publicTextToPrint;

    myClass();
    ~myClass();
    
    void publicFunction(string);
};

#endif  // MYCLASS_H



// tehtävä 2
#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
using namespace std;

class myClass {
private:
    int number1;
    int number2;
    
protected:
    void setNumber1(int);
    void setNumber2(int);
    
public:
    int result;
    
myClass();

int calculateResult();
};
    
#endif  // MYCLASS_H
    
    
    
// tehtävä 3
class Apartment{
private:
    int numOfTenants;
    int area;
    
public:
    Apartment(int, int);
    
    int heatingCost();
    };
    
    
Apartment::Apartment(int numOfTenants, int area) {
    this->numOfTenants = numOfTenants;
    this->area = area;
    }
    
int Apartment::heatingCost() {
    return numOfTenants * area;
}



// tehtävä 4
#include <iostream>
using namespace std;

class Vehicle {
private:
    int speed;
    string name;
    
public:
    Vehicle();
    
    int getSpeed() const;
    void setSpeed(const int &newSpeed);
    
    string getName() const;
    void setName(const string &newName);
};
    
    
Vehicle::Vehicle() {}


int Vehicle::getSpeed() const {
    return speed;
}

void Vehicle::setSpeed(const int &newSpeed) {
    speed = newSpeed;
}


string Vehicle::getName() const {
    return name;
}

void Vehicle::setName(const string &newName) {
    name = newName;
}
*/