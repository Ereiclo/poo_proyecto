//
// Created by ericb on 13/12/2020.
//

#include "Definiciones.h"

void generar_archivo(string nombrefisico, int cantidad) {
    int r = 2;
    fstream archivo(nombrefisico, ios::out);
    // Generar los n numeros
    for (int i = 0; i < cantidad; ++i) {
        archivo << r;
    }
    archivo.close();
}