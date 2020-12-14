


#include "CPublicacion.h"


using namespace std;
/*
vector<CPublicacion*> publi;
fstream x;
ofstream y;string dajkfajsdklf="\nfas";
y.open("publicaciones.txt",ios_base::app);
y<<dajkfajsdklf;
y.close();*/

int main() {
    vector<CPublicacion*> publi;
    ifstream x;


    x.open("publicaciones.txt");
    string autor1, autor2;
    string pags;
    string titulo, editorial, enlace, l, floro,a;
    entero paginas, ano, n;
    string autor;
    //string _autor, string _titulo, entero _paginas, string _editorial, entero _ano, string _enlace
    while ((getline(x,floro))) {
        n++;
    }
    cout<<n<<endl;
    n /= 6;
    cout << n;
    x.close();
    x.open("publicaciones.txt");
    for (int i = 1; i <= n; i++) {
        getline(x, autor);
        getline(x, titulo);
        getline(x, pags);
        stringstream(pags)>>paginas;
        getline(x, editorial);
        getline(x, a);
        stringstream(a)>>ano;
        getline(x, enlace);
        publi.emplace_back(new CPublicacion(autor,titulo,paginas,editorial,ano,enlace));



    }
    for(const auto &i: publi){
        cout<<i->get_autor()<<endl;
        cout<<i->get_titulo()<<endl;
        cout<<i->get_paginas()<<endl;
        cout<<i->get_editorial()<<endl;
        cout<<i->get_ano()<<endl;
        cout<<i->get_enlace()<<endl;
    }

    return 0;

}