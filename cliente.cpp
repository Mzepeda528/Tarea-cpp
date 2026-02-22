#include "personas.cpp"
#include <iostream>
using namespace std;

 class cliente : Personas {
    //atributos
    private : string nit;

    //constructor
    public :
    cliente(){
    }

    cliente(string nom,string ape,string dir,int tel,string m): Personas(nom,ape,dir,tel){
        nit =m;

    }

    //metodos
    //set (modificar)
    void setNit(string n){bit = n;}
    void setNombres(tring nom){nombres = nom;}
    void setapellidos (string ape){apellidos = ape;}
    void setDireccion(string dir){direccion = dir;}
    void setTelefono(int tel){telefono = tel;}
    //get (mostrar)
    string getNit(){ return nit;}
    string getNombres (){return nombres;}
    string getApellidos (){return apellidos;}
    string getDireccion(){return direccion;}
    int getTelefono(){return telefono;}


    void mostrar(){
        cout<<"--------"<<endl;
        cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
    }
};
