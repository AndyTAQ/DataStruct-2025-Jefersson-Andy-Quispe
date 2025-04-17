// Verificar si la nota es aprobatoria
# include <iostream>
using namespace std ;

int main () {
	int nota ;
	cout << " Ingrese la nota del alumno : "<<endl;
	cin >> nota ;

	if ( nota >= 11) {
	cout << " Aprobado " << endl ;
	} else {
	cout << " Desaprobado " << endl ;
	}

	return 0;
}

