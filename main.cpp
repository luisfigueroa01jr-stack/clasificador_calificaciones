#include <iostream>
#include <string>

std::string obtenerNivel(int calificacion) {
    if (calificacion < 0 || calificacion > 100) {
        return "Calificacion invalida";
    } else if (calificacion < 60) {
        return "NA";
    } else if (calificacion < 70) {
        return "S";
    } else if (calificacion < 80) {
        return "B";
    } else if (calificacion < 90) {
        return "MB";
    } else {
        return "E";
    }
}

int main() {
    int calificacion;

    std::cout << "Ingrese una calificacion (0-100): ";
    std::cin >> calificacion;

    std::cout << "Nivel: " << obtenerNivel(calificacion) << std::endl;

    return 0;
}
