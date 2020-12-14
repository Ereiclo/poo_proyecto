//
// Created by ericb on 13/12/2020.
//
#include "CUsuario.h"

CUsuario::CUsuario(string _DNI, string _nombre, string _apellido, string _usuario, string _clave):CCuenta(_DNI, _nombre, _apellido, _usuario, _clave)
{

}


void CUsuario::comprar()
{

}

void CUsuario::acceder() {

}

string CUsuario::buscar() {
    return "";
}

void CUsuario::leer() {
    cout<<"Se esta leyendo el articulo...";
}
