//
// Created by ericb on 13/12/2020.
//

#ifndef PROYECTOPOO2_CPUBLICACION_H
#define PROYECTOPOO2_CPUBLICACION_H

#include "Definiciones.h"
class CPublicacion
{
private:
    string autor;
    string titulo;
    entero num_paginas;
    string editorial;
    entero ano_publicacion;
    string enlace;


public:

    CPublicacion(string _autor, string _titulo, entero _paginas, string _editorial, entero _ano, string _enlace);

    virtual ~CPublicacion(){};

    void set_autor(string _autor){autor = _autor;}
    void set_titulo(string _titulo){titulo = _titulo;}
    void set_paginas(entero _paginas){num_paginas = _paginas;}
    void set_editorial(string _editorial){editorial = _editorial;}
    void set_ano(entero _ano){ano_publicacion = _ano;}
    void set_link(string _enlace){enlace = _enlace;}

    string get_autor(){return autor;}
    string get_titulo(){return titulo;}
    entero get_paginas(){return num_paginas;}
    string get_editorial(){return editorial;}
    entero get_ano(){return ano_publicacion;}
    string get_enlace(){return enlace;}
    vector<CPublicacion*> publicaciones();

    void indexar();
};
#endif //PROYECTOPOO2_CPUBLICACION_H
