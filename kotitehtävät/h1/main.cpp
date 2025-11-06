#include <iostream>

using namespace std;


void calcSum(int a, int b) {
    int summa = a + b;
    cout <<  a << "+" <<  b << " = " << summa << endl;
}


void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Error: jakaja ei saa olla nolla!" << endl;
    } else {
        float osamaara = (float)a / (float)b;
        cout << a << "/" <<  b << " = " << osamaara << endl;
    }
}


int retSum (int a, int b) {
    int summa = a + b;
    return summa;
}


float retDiv (int a, int b) {
    float osamaara = 0;

    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    } else {
        osamaara = (float)a / (float)b;
    }

    return osamaara;
}


int main() {
    int a = 0;
    int b = 0;

    cout << "anna luku a: " << endl;
    cin >> a;
    cout << "anna luku b: " << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    cout <<  a << "+" <<  b << " = " << summa << endl;

    try {
        float osamaara = retDiv(a,b);
        cout << a << "/" <<  b << " = " << osamaara << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
