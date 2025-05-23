/*
Crea un programa que llene un arreglo con 100 n�meros
enteros aleatorios enntre 1 a 500.
Luego, utiliza estructuras de control para identificar 
y mostrar cu�ntos de esos n�meros son primos
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int arrai[100];
    int cantidadPrimos = 0;

    srand(time(0)); 

    for (int i = 0; i < 100; i++) {
        arrai[i] = rand() % 500 + 1; 

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

