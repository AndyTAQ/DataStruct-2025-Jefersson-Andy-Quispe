/*
Realiza un programa que almacene 20 n�meros enteros(puede repetirse)
en un arreglo y calcule la frecuencia de aparici�n de cada n�mero distinto.
*/
#include <iostream>
using namespace std;

int main() {
	
	cout <<"ingrese los numeros: "<<endl;
    int arrai[20];
    for (int i = 0; i < 20; i++) cin >> arrai[i];

    for (int i = 0; i < 20; i++) {
        bool rep = false;
        for (int j = 0; j < i; j++) {
            if (arrai[i] == arrai[j]) {
                rep = true;
                break;
            }
        }
        if (!rep) {
            int f = 0;
            for (int j = 0; j < 20; j++) if (arrai[j] == arrai[i]) f++;
            cout << arrai[i] << " aparece " << f << " veces\n";
        }
    }

    return 0;
}

