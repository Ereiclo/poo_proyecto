//
// Created by ericb on 13/12/2020.
//

#ifndef PROYECTOPOO2_CUSUARIO_H
#define PROYECTOPOO2_CUSUARIO_H


#include "CUsuario.h"

#include "Definiciones.h"
#include "CCuenta.h"

class CUsuario: CCuenta
{
public:
    CUsuario(){};
    CUsuario(string _DNI, string _nombre, string _apellido, string _usuario, string _clave);
    virtual ~CUsuario(){};

//Métodos heredados de la clase
    void acceder() override;
    string buscar() override;
    void leer() override;

//Métodos únicos de la clase
    void comprar();
};
#endif //PROYECTOPOO2_CUSUARIO_H
