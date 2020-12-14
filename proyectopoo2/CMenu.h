//
// Created by ericb on 13/12/2020.
//

#ifndef PROYECTOPOO2_CMENU_H
#define PROYECTOPOO2_CMENU_H

#include "Definiciones.h"
#include "CCuenta.h"
#include "CUsuario.h"

class Cmenu{
    int opcion;
public:
    Cmenu(){}
    void exe();
    bool verificar_inicio_sesion(string,string);
    virtual ~Cmenu(){}
};



#endif //PROYECTOPOO2_CMENU_H
