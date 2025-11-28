/*
// tehtävä 1
#include <iostream>
#include <memory>

using namespace std;

class Bicycle {
public:
    Bicycle();
    ~Bicycle();
};


class Storage {
private:
    unique_ptr<Bicycle> a = make_unique<Bicycle>();
    unique_ptr<Bicycle> b = make_unique<Bicycle>();
    unique_ptr<Bicycle> c = make_unique<Bicycle>();
public:
    Storage();
    ~Storage();
};


Bicycle::Bicycle() {
    cout << "A new Bicycle created" << endl;
}

Bicycle::~Bicycle() {
    cout << "Bicycle deleted" << endl;
}


Storage::Storage() {
    
    cout << "A new bicycle storage created" << endl;
}

Storage::~Storage() {
    cout << "Bicycle storage deleted" << endl;
}



// tehtävä 2
#include <iostream>
#include <memory>

using namespace std;

class ClassB {
    public:
    ClassB();
    void printAssosiation(void);
    void printAggregation(void);
    void printComposition(void);
};

class ClassA {
    public:
    ClassA();
    void print1(ClassB B);
    void print2(ClassB &B);
    void print3();
};


//luokan ClassA toteutus(cpp)
ClassA::ClassA() {}
void ClassA::print1(ClassB B) {
    B.printAssosiation();
}
void ClassA::print2(ClassB & B) {
    B.printAggregation();
}
void ClassA::print3() {
    ClassB B;
    B.printComposition();
}


//luokan ClassB toteutus(cpp)
ClassB::ClassB() {}
void ClassB::printAssosiation() {
    cout<<"This is assosiation"<< endl;
}
void ClassB::printAggregation() {
    cout<<"This is aggregation"<< endl;
}
void ClassB::printComposition() {
    cout<<"This is composition"<< endl;
}


int main() {
    ClassA A;
    
    ClassB B;
    A.print1(B);
    A.print2(B);
    A.print3();
    
    return 0;
}
*/



// tehtävä 3
#include <iostream>
#include <memory>

using namespace std;


class Roof {
private:
    string material;
public:
    void setMaterial(string value) {
        material=value;
    }
    string getMaterial() {
        return material;
    }
};


class House {
private:
    unique_ptr<Roof> roof;
public:
    House() : roof(make_unique<Roof>()) {}

    void setRoof(string value) {
        roof->setMaterial(value);
    }

    void printData() {
        cout << "Katto materiaali on " << roof->getMaterial() << endl;
    }
};


int main() {
    House house;

    house.setRoof("pelti");
    house.printData();

    return 0;
}