// Operadores & y *
#include <iostream>

int main() {
    int var = 10;                    
    int* ptr = &var;                

    std::cout << "El valor de var: " << var << std::endl;
    std::cout << "La dirección de memoria de var: " << &var << std::endl;
    std::cout << "El valor de ptr: " << ptr << std::endl;                
    std::cout << "El valor apuntado por ptr: " << *ptr << std::endl;    

    return 0;
}
