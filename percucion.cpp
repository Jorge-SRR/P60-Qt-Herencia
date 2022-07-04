#include "percucion.h"
#include "instrumentos.h"

percucion::percucion()
{

}

percucion::percucion(string nombre, string material, float altura, float costo) : instrumentos(nombre, material, altura, costo)
{

}

void percucion::Fichainst()
{
    bool alturas;
    string nombre;
    float altura = 0.0;
    string material;
    float costo = 0.0;


    cout << "------Ingrese el nombre del instrumento:--------- ";
    getline(cin >> ws, nombre);
    cout << "\nMaterial del que esta hecho: ";
    getline(cin >> ws, material);
    cout << "\nEl instrumento tiene una altura de\n";
    cout << "0. Determinada \n1. Indeterminada";
    cout << "\n Su opcion es: ";
    cin >> alturas;
    if(alturas){
        cout << "\nIngrese la altura del instrumento: ";
        cin >> altura;
        costo = 120.0;
        cout << "\nEl valor del instrumento es: " << costo;
    }
    if(alturas == 1){
        cout << "La altura es indefinida";
        cout << "\nEl valor del instrumento depende de su altura";
    }

    instrumentos c(nombre, material, altura, costo);
    this->instrumentostot.push_back(c);

}

void percucion::listarinstrumentos()
{

    if(this->instrumentostot.empty()){
        cout << "No hay ningun instrumento de percucion\n";
    }else{
        for(instrumentos c : this->instrumentostot){
            cout << "------INSTRUMENTOS DE PERCUCION-------\n";
            cout << c.informacion3();
        }
    }
}

string percucion::afinar()
{
    string nombre;
    return "Nombre: " + nombre + "Tensando tambores";
}





