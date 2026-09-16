#include "clasificador.h"
#include <iostream>

int main() {
    Clasificador clasificador;
    int calificacion;

    std::cout << "Ingrese una calificacion (0-100): ";
    std::cin >> calificacion;

    std::cout << "Nivel: " << clasificador.obtenerNivel(calificacion) << std::endl;

    return 0;
}
