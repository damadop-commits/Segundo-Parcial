#include <iostream>
#include <string>
using namespace std;

class Jugador{
private:
    string nombre;
    int goles;

public:
    // Constructor
    Jugador(string nombre, int goles){
        this->nombre = nombre;
        this->goles = goles;
    }

    // Setter
    void setGoles(int goles){
        if(goles >= 0){
            this->goles = goles;
        }
    }

    // Getter
    int getGoles(){
        return goles;
    }

    void mostrar(){
        cout << "Jugador: " << nombre << " - Goles: " << goles << endl;
    }
};

int main(){
    Jugador j1("Messi", 10);

    j1.mostrar();
    j1.setGoles(15);
    cout << "Nuevo goles: " << j1.getGoles() << endl;

    return 0;
}
