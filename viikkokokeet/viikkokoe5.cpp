/*
// tehtävä 1
int summa(int* a, int* b) {
    return *a + *b;
}



// tehtävä 2
int summa(int & a, int & b) {
    return a + b;
}



// tehtävä 3
class myClass
{
public:
myClass();
~myClass();
void memberFunction();
};


#include <iostream>
using namespace std;

myClass::myClass()
{
   cout<<"Executing constructor..."<<endl;
}

myClass::~myClass()
{
    cout<<"Executing destructor..."<<endl;
}

void myClass::memberFunction()
{
    cout<<"Running member function..."<<endl;
}


int main()
{
    // tassa tehdään pointteri myClass olioon. Pointteri tulee varatuksi pinosta
    myClass* ptr;
    
    // Tassa sitten asetetaan pointterille arvo eli kaytetaan new operaatiota
    // olion varaamiseksi keosta eli heapista.
    ptr = new myClass();
    
    // Ja tassa sitten käytetaan pointteria memberFunktion kutsumiseen
    ptr->memberFunction();
    
    // Ja lopuksi pointteri vapautetaan ja olio tulee samalla tuhotuksi.
    delete ptr;

    return 0;
}



// tehtävä 4
#include <iostream>

using namespace std;

class ratas
{
    public:
    ratas(string);
    ~ratas();
    private:
    string type;
};

class Polkupyora
{
public:
    Polkupyora();
    ~Polkupyora();
private:
    ratas * eturatas;
    ratas * takaratas;
};


ratas::ratas(string s)
{
   cout<<"constructing " << s << endl;
   type = s;
}

ratas::~ratas()
{
    cout<<"destructing " << type << endl;
}


Polkupyora::Polkupyora()
{
    eturatas = new ratas("eturatas");
    takaratas = new ratas("takaratas");
}

Polkupyora::~Polkupyora()
{
    delete eturatas;
    delete takaratas;
}


int main()
{
    Polkupyora olio;
    return 0;
}
*/