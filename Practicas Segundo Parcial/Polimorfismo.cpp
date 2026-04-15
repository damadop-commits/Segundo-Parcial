#include <iostream>
using namespace std;

class Animal{
public:
    virtual void sonido(){
        cout << "Animal hace sonido" << endl;
    }
};

class Perro : public Animal{
public:
    void sonido(){
        cout << "El perro ladra" << endl;
    }
};

class Gato : public Animal{
public:
    void sonido(){
        cout << "El gato maulla" << endl;
    }
};

int main(){
    Animal* a;

    Perro p;
    Gato g;

    a = &p;
    a->sonido();

    a = &g;
    a->sonido();

    return 0;
}
