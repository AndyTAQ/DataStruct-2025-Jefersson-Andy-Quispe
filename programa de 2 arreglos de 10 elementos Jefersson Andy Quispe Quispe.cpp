/*
Crea un programa que permita llenar dos arreglos de 10 elementos cada uno.
Compara ambos y determina cuántos elementos en las mismas posiciones son iguales  
*/
#include <iostream>
using namespace std;

int main() {
    int irrai1[10], irrai2[10], iguales = 0;

    cout << "Ingresa 10 numeros para el primer arreglo:\n";
    for (int i = 0; i < 10; i++) cin >> irrai1[i];

    cout << "Ingresa 10 numeros para el segundo arreglo:\n";
    for (int i = 0; i < 10; i++) cin >> irrai2[i];

    for (int i = 0; i < 10; i++) {
        if (irrai1[i] == irrai2[i]) iguales++;
    }

    cout << "Cantidad de elementos iguales en la misma posicion: " << iguales << endl;

    return 0;
}

