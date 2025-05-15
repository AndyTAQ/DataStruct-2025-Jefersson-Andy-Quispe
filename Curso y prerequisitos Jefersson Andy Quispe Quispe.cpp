#include <iostream>
#include <string>

// Nodo para la lista de cursos
struct Curso {
    std::string nombre;
    int semestre;
    Curso* siguiente;

    void mostrarCurso() {
        std::cout << "Curso: " << nombre << " (Semestre " << semestre << ")" << std::endl;
    }
};

// Agrega un curso al final de la lista
void agregarCurso(Curso*& cabeza, const std::string& nombre, int semestre) {
    Curso* nuevo = new Curso();
    nuevo->nombre = nombre;
    nuevo->semestre = semestre;
    nuevo->siguiente = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Curso* temp = cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo;
    }
}

// Imprime todos los cursos en la lista
void imprimirCursos(Curso* cabeza) {
    Curso* temp = cabeza;
    while (temp != nullptr) {
        temp->mostrarCurso();
        temp = temp->siguiente;
    }
}

// Libera memoria de la lista
void eliminarCursos(Curso*& cabeza) {
    Curso* temp;
    while (cabeza != nullptr) {
        temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
    }
}

int main() {
    Curso* planEstudios = nullptr;

    // Cursos por semestre
    std::cout << "=== Plan de estudios ===" << std::endl;
    agregarCurso(planEstudios, "Sin prerequisitos", 1);
    agregarCurso(planEstudios, "Analisis y Diseno de Algoritmos", 2);
    agregarCurso(planEstudios, "Estructura de Datos", 3);

    imprimirCursos(planEstudios);

    // Mensaje final con lógica
    std::cout << "\n=== Requisitos ===" << std::endl;
    std::cout << "Para llevar el curso de ESTRUCTURA DE DATOS en tercer semestre,\n";
    std::cout << "debí haber aprobado ANALISIS Y DISENO DE ALGORITMOS en segundo semestre,\n";
    std::cout << "y este curso no tenía prerequisitos en primer semestre.\n";

    // Limpieza
    eliminarCursos(planEstudios);

    return 0;
}

