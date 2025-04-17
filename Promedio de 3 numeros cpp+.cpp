// Promedio de tres numeros
# include <iostream>
using namespace std ;

int main () {
	int num1 , num2 , num3 , promedio;

	cout << " Ingrese tres numeros : "<<endl;
	cin >> num1 >> num2 >> num3 ;

	promedio = ( num1 + num2 + num3 ) / 3;

	cout << "El promedio es: " << promedio << endl ;

	return 0;
}

