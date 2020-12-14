//
// Created by ericb on 13/12/2020.
//

#ifndef PROYECTOPOO2_CAUTOR_H
#define PROYECTOPOO2_CAUTOR_H
#include "Definiciones.h"
#include "CCuenta.h"
#include "CPublicacion.h"
class CAutor: CCuenta
{
public:
    CAutor(){};
    CAutor(string _DNI, string _nombre, string _apellido, string _usuario, string _clave);
    virtual ~CAutor(){};

//Métodos heredados de la clase
    void acceder() override;
    string buscar() override;
    void leer() override;

//Métodos únicos de la clase
    void editar();
    void agregar();
    void descargar();
};


#endif //PROYECTOPOO2_CAUTOR_H
