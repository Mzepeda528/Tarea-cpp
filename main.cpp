#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
   string nit,nombre,apellidos,direccion;
   int telefono;
   cout<<"Ingrese Nit:";
   cin>>nit;
   cout<<"Ingrese Nombres:";
   cin>>nombres;

   cout<<"Ingrese apellidos: ";
   cin>>apellidos;
   cout<<"Ingrese Direccion: ";
   cin>>direccion;
   cout<<"Ingrese telefono:";
   cin>>telefono;

     //instancia de un objeto
     /*Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);

     obj.mostrar();

     cout<<"Ingrese Nit:";
   cin>>nit;
   obj.stNit(nit);
   obj.mostrar();*/
   Cliente obj= Cliente();
   obj.setNit(nit);
   obj.setNombres(nombres);
   obj.setApelidos(apellidos);
   obj.setDireccion(direccion);
   obj.setTelefono(telefono);
   obj.mostrar();

}
