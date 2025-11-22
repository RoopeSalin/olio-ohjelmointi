/*
// tehtävä 1
#include <iostream>
using namespace std;

class BasicALU {
public:
    BasicALU();
    
    double sum(double, double);
    double sub(double, double);
    double mul(double, double);
    double div(double, double);
};


class Calculator: public BasicALU {
private:
    double op1;
    double op2;
    double result;
    char operation;
public:
    Calculator();

    void inputOperands();
    void calculateResult();
    void showResults();
};



BasicALU::BasicALU() {
    cout<<"BasicALU constructor!!"<<endl;
}

double BasicALU::sum(double op1, double op2) {
    return op1 + op2; 
}

double BasicALU::sub(double op1, double op2) {
    return op1 - op2; 
}

double BasicALU::mul(double op1, double op2) {
    return op1 * op2; 
}

double BasicALU::div(double op1, double op2) {
    return op1 / op2; 
}


Calculator::Calculator() {
   cout<<"Calculator constructor!!"<<endl;
}

void Calculator::inputOperands() {
    cout<<"Give first operand"<<endl;
    cin>>op1;

    cout<<"Give operation +, -, * or / "<<endl;
    cin>>operation;

    cout<<"Give second operand"<<endl;
    cin>>op2;
}

void Calculator::calculateResult() {
    switch (operation) {
    case '+':
        result = sum(op1,op2);
        break;
    case '-':
        result = sub(op1,op2);
        break;
    case '*':
        result = mul(op1,op2);
        break;
    case '/':
        result = div(op1,op2);
        break;
    default:
        cout<<"No such operation!"<<endl;
    }
}

void Calculator::showResults() {
    cout<<op1 << operation << op2 << " = " << result << endl;
}



// tehtävä 2
#include <iostream>
using namespace std;

class GrandFather {
    private:
    string Grandname;
    public:
    GrandFather();
    
    void setGrandName(string);
    string getGrandName();
};

class Father: public GrandFather {
    private:
    string Fathername;
    public:
    Father();
    
    void setFatherName(string);
    string getFatherName();
};

class Son: public Father {
    private:
    string name;
    public:
    Son(string);
    
    void setName(string);
    string getName();
};


Son::Son(string value) {
    name = value;
    setFatherName("Father of " + value);
    setGrandName("GrandFather of " + value);
}

void Son::setName(string value) {
    name = value;
}

string Son::getName() {
    return name;
}


Father::Father() {}

void Father::setFatherName(string value) {
    Fathername = value;
}

string Father::getFatherName() {
    return Fathername;
}


GrandFather::GrandFather() {}

void GrandFather::setGrandName(string value) {
    Grandname = value;
}

string GrandFather::getGrandName() {
    return Grandname;
}
*/