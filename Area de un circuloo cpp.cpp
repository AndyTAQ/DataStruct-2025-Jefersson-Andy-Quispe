//Area de un circulo
#include <iostream>
using namespace std;

int main() {
    float radio, area;
    const float PI = 3.1416;

    cout << "Ingresa el radio del circulo: "<<endl;
    cin >> radio;

    area = PI * radio * radio;

    cout << "El area del circulo es: " << area << endl;

    return 0;
}

