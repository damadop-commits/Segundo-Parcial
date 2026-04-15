#include <iostream>
#include <string>

using namespace std;

class Producto{

private:
    string nombre;
    double precio;
public:
    Producto(string _nombre, double _precio){

        nombre = _nombre;
        precio = _precio;
    }


    void mostrar (){
    cout<<"Producto: " << nombre << "\t" << "Precio: Q." << precio << endl;
    }

    void categoria(){
       if (precio > 2000){
        cout <<"El Producto es Caro"<<endl;
        }else{
     cout <<"El Producto es Barato"<<endl;
        }
    }
};

    main(){
    Producto P1("Computadora", 100.00);

    P1.mostrar();
    P1.categoria();

    return 0;
    }
