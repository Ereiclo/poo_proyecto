//
// Created by ericb on 13/12/2020.
//

#include "CAutor.h"
CAutor::CAutor(string _DNI, string _nombre, string _apellido, string _usuario, string _clave):CCuenta(_DNI, _nombre, _apellido, _usuario, _clave)
{

}

string CAutor::buscar()
{
return "";
}


void CAutor::leer()
{

  //CPublicacion *pLeido;
  //pLeido = CPublicacion
}




void CAutor::editar(){

}

void CAutor::agregar()
{
  entero decision=0;
  cout<<"Desea agregar un nuevo articulo?"<<endl;
  cout<<"Opcion 1: Si\n";
  cout<<"Opcion 2: No\n";
  do {
    cout<<"Escriba la opcion que desea y presione ENTER"<<endl;
    cin>>decision;
  } while (decision != 1 && decision != 2);

  switch(decision)
  {
    case 1:
      cout<<"Por favor, ingrese los siguientes datos del articulo";


      break;

    case 2:
      cout<<"saliendo de menu agregar articulo...\n";
      break;
  }
}

void CAutor::descargar()
{
  entero decision=0;
  cout<<"Desea descargar el libro que visualiza?"<<endl;
  cout<<"Opcion 1: Si\n";
  cout<<"Opcion 2: No\n";
  do {
    cout<<"Escriba la opcion que desea y presione ENTER"<<endl;
    cin>>decision;
  } while (decision != 1 && decision != 2);

  switch(decision)
  {
    case 1:
      cout<<"la descarga comenzara de inmediato...";
      break;

    case 2:
      cout<<"saliendo de menu descarga...\n";
      break;
  }
}

void CAutor::acceder() {

}

