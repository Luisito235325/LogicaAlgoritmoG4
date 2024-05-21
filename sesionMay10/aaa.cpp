#include <iostream>
#include <string>

int main() {
    // Arreglo de enteros
    int numeros[3] = {10, 20, 30};

    // Arreglo de decimales
    float decimales[3] = {1.1f, 2.2f, 3.3f};

    // Arreglo de cadenas
    std::string nombres[3] = {"Juan", "Ana", "Luis"};

    // Mostrar los elementos de los arreglos
    std::cout << "Arreglo de enteros:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "numeros[" << i << "]: " << numeros[i] << std::endl;
    }

    std::cout << "Arreglo de decimales:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "decimales[" << i << "]: " << decimales[i] << std::endl;
    }

    std::cout << "Arreglo de cadenas:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "nombres[" << i << "]: " << nombres[i] << std::endl;
    }

    return 0;
}
