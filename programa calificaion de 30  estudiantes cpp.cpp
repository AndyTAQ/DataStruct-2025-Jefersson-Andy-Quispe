#include <iostream>
using namespace std;

int main() {
    int tamano = 30;
    int suma = 0;
    int arrai[tamano];
    
    for (int i = 0; i < tamano; i++) {
        cout << "Ingresa un numero:" << endl;
        cin >> arrai[i];
        suma = suma + arrai[i];
    }

    int promedio = suma / tamano;
    cout << "Promedio: " << promedio << endl;

    return 0;
}

