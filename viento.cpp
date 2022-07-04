#include "viento.h"
#include "instrumentos.h"

viento::viento()
{

}

viento::viento(string nombre, string material, float costo, string clasificacion) : instrumentos(nombre, material, costo, clasificacion)
{

}

void viento::daFicha()
{
    string nombre;
    string clasificacion;
    string material;
    float costo;


    cout << "Ingrese el nombre del instrumento: ";
    getline(cin >> ws, nombre);
    cout << "\nDe que material esta hecho: ";
    getline(cin >> ws, material);
    cout << "\nCual es su clasificacion (de bisel, de lengueta, dobles, de embocadura): ";
    getline(cin >> ws, clasificacion);

    if(clasificacion == "bisel"){
        costo = 130.00;
        cout << "El valor de este instrumento es de: " << costo;
    }

    if(clasificacion == "lengueta"){
        costo = 140.00;
        cout << "El valor de este instrumento es de: " << costo;
    }

    if(clasificacion == "dobles"){
        costo = 145.00;
        cout << "El valor de este instrumento es de: " << costo;
    }

    if(clasificacion == "embocadura"){
        costo = 150.00;
        cout << "El valor de este instrumento es de: " << costo;
    }

    instrumentos c(nombre, material, clasificacion, costo);
    this->instrumentostot.push_back(c);
}

void viento::listarinstru()
{

    if(this->instrumentostot.empty()){
        cout << "No hay ningun instrumento de viento\n";
    }else{
        for(instrumentos c : this->instrumentostot){
            cout << "-------INSTRUMENTOS DE VIENTO---------\n";
            cout << c.informacion2();
        }
    }
}

string viento::afinar()
{
    string nombre;
    return "Nombre: " + nombre + "Limpiando instrumento";
}

