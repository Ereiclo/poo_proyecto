//
// Created by ericb on 13/12/2020.
//


#include "CPublicacion.h"

CPublicacion::CPublicacion(string _autor, string _titulo, entero _paginas, string _editorial, entero _ano, string _enlace)
{
    autor = _autor;
    titulo = _titulo;
    num_paginas = _paginas;
    editorial = _editorial;
    ano_publicacion = _ano;
    enlace = _enlace;


}

void CPublicacion::indexar()
{


}

vector<CPublicacion *> CPublicacion::publicaciones() {
    vector<CPublicacion *> publicaciones;
    ifstream p;
    string a,b,d,f;
    entero c,e;

    p.open("publicaciones.txt");



    for(;(p>>b>>c>>d>>e>>f);){
        getline(p,a);
        publicaciones.emplace_back( new CPublicacion(a,b,c,d,e,f));
    }

    p.close();




    return publicaciones;
}
