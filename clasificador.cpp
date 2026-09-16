#include "clasificador.h"

std::string Clasificador::obtenerNivel(int calificacion) {
    if (calificacion < 0 || calificacion > 100) {
        return "Calificacion invalida";
    } else if (calificacion < 60 && calificacion >= 0) {
        return "NA";
    } else if (calificacion < 70 && calificacion >= 60) {
        return "S";
    } else if (calificacion < 80 && calificacion >= 70) {
        return "B";
    } else if (calificacion < 90 && calificacion >= 80) {
        return "MB";
    } else {
        return "E";
    }
}
