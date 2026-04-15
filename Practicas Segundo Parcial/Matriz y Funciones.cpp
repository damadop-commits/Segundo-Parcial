#include <iostream>
using namespace std;

// Función para llenar matriz
void llenar(int m[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << "Ingrese valor ["<<i<<"]["<<j<<"]: ";
            cin >> m[i][j];
        }
    }
}

// Función para mostrar matriz
void mostrar(int m[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    int matriz[3][3];

    llenar(matriz);
    mostrar(matriz);

    return 0;
}
