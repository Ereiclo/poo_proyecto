//
// Created by ericb on 13/12/2020.
//

#include "Cmenu.h"
bool Cmenu:: verificar_inicio_sesion(string username,string password) {

    ifstream usuarios;

    usuarios.open("usuarios.txt");
    string a, b;
    bool encontrados = 0;
    for (; (usuarios >> a >> b);) {
        if (a == username && b == password) {
            encontrados = 1;
        }


        usuarios.close();
        if (encontrados) {
            return 1;
        }
    }
        return 0;

}
    void Cmenu:: exe()
    {
        CCuenta *user=0;
        string username="";
        string password="";
        cout<<"Este es su ... de publicaciones"<<endl;
        cout<<"\nOpciones:"<<endl;
        cout<<"1. Iniciar sesión como usuario"<<endl;
        cout<<"2. Iniciar sesión como autor"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
                cout<<"Username: ";
                cin>>username;
                cout<<"Password: ";
                cin>>password;
                if(!verificar_inicio_sesion(username,password)){
                    break;
                }

                break;
            case 2:
                cout<<"Username: ";
                cin>>username;
                cout<<"Password: ";
                cin>>password;
                if(!verificar_inicio_sesion(username,password)){
                    break;
                }

                break;
            case 3:
                break;


        }

    }