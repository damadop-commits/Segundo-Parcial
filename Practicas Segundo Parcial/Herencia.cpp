#include <iostream>
using namespace std;

class Persona{
protected:
    string nombre;

public:
    Persona(string nombre){
        this->nombre = nombre;
    }
};

class Futbolista : public Persona{
private:
    int goles;

public:
    Futbolista(string nombre, int goles) : Persona(nombre){
        this->goles = goles;
    }

    void mostrar(){
        cout << nombre << " - Goles: " << goles << endl;
    }
};

int main(){
    Futbolista f1("Cristiano", 20);
    f1.mostrar();

    return 0;
}
