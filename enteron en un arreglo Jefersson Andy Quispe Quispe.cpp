/*
Escribe un programa que permita al usuario ingresar 10 numeros enteros en un
arreglo. Luego, rota los elementos una posición a la derecha de modo que el ultimo 
pase ser el primero y muestre el resultado.
*/
#include <iostream>
using namespace std;

int main() {
    int a[10];

    cout << "Escribe los numeros:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    int x = a[9];

    for (int i = 9; i > 0; i--) {
        a[i] = a[i - 1];
    }

    a[0] = x;

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

