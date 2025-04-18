/*
Crea un programa que llene un arreglo con 100 números
enteros aleatorios enntre 1 a 500.
Luego, utiliza estructuras de control para identificar 
y mostrar cuántos de esos números son primos
*/
#include <iostream>
using namespace std;

int main() {
    int arrai[100];
    int cantidadPrimos = 0;

    for (int i = 0; i < 100; i++) {
        cout << "Ingresa un numero: ";
        cin >> arrai[i];

        int divisores = 0;
        for (int j = 1; j <= arrai[i]; j++) {
            if (arrai[i] % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cantidadPrimos++;
        }
    }

    cout << "Cantidad de numeros primos: " << cantidadPrimos << endl;

    return 0;
}
