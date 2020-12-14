//
// Created by ericb on 13/12/2020.
//

#ifndef PROYECTOPOO2_CCUENTA_H
#define PROYECTOPOO2_CCUENTA_H

#include "Definiciones.h"


class CCuenta
{
protected:
    string DNI;
    string nombre;
    string apellido;
    string usuario;
    string clave;

public:
    CCuenta(){}
    CCuenta(string _DNI, string _nombre, string _apellido, string _usuario, string _clave);
    virtual ~CCuenta(){}

    //Métodos virtuales de la clase
    virtual void acceder()=0;
    virtual string buscar()=0;
    virtual void leer()=0;

};


#endif //PROYECTOPOO2_CCUENTA_H
