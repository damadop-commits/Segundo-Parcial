#include <iostream>
using namespace std;

class Figura{
public:
    // Método virtual puro (abstracto)
    virtual void area() = 0;
};

class Cuadrado : public Figura{
private:
    int lado;

public:
    Cuadrado(int lado){
        this->lado = lado;
    }

    void area(){
        cout << "Area: " << lado * lado << endl;
    }
};

int main(){
    Cuadrado c1(5);
    c1.area();

    return 0;
}
