#include <iostream>
#include <string>
using namespace std;

class Persona{
protected:
    string nombre;

public:
    Persona(string nombre){
        this->nombre = nombre;
    }
};

class Estudiante : public Persona{
private:
    int nota;

public:
    Estudiante(string nombre, int nota) : Persona(nombre){
        this->nota = nota;
    }

    void setNota(int nota){
        if(nota >= 0 && nota <= 100){
            this->nota = nota;
        }
    }

    int getNota(){
        return nota;
    }

    void mostrar(){
        cout << "Nombre: " << nombre << " Nota: " << nota << endl;

        if(nota >= 61)
            cout << "Aprobado" << endl;
        else
            cout << "Reprobado" << endl;
    }
};

int main(){
    Estudiante e1("Daniel", 50);

    e1.mostrar();

    e1.setNota(80);

    cout << "Nueva nota: " << e1.getNota() << endl;

    return 0;
}
