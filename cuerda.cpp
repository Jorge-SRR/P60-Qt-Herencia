#include "cuerda.h"
#include "instrumentos.h"
cuerda::cuerda()
{

}

cuerda::cuerda(string nombre, string material, float costos, string estilo) : instrumentos(nombre, material, costos, estilo)
{

}


void cuerda::fichainst()
{
    string nombre;
    string estilo;
    string material;
    float costos;


    cout << "Ingrese el nombre del instrumento: ";
    getline(cin >> ws, nombre);
    if(nombre == "guitarra"){
        cout << "\nDe que material esta hecho: ";
        getline(cin >> ws, material);
        cout << "\nQue estilo deseas clasico o electronico: ";
        getline(cin >> ws, estilo);

        if(estilo == "clasico"){
            costos = 150.00;
            cout << "El valor del instrumento es: " << costos;
        }else if(estilo == "electrico"){
            costos = 190.00;
            cout << "El valor del instrumento es: " << costos;
        }



    }

    if(nombre == "violin"){
        cout << "\nDe que material esta hecho: ";
        getline(cin >> ws, material);
        cout << "\nQue estilo desea clasico o electronico: ";
        getline(cin >> ws, estilo);

        if(estilo == "clasico"){
            costos = 150.00;
            cout << "El valor del instrumento es: " << costos;
        }else if(estilo == "electronico"){
            costos = 190.00;
            cout << "El valor del instrumento es: " << costos;
        }



    }


    if(nombre == "piano"){
        cout << "\nDe que material esta hecho: ";
        getline(cin >> ws, material);
        cout << "\nQue estilo desea vertical o de cola:";
        getline(cin >> ws, estilo);

        if(estilo == "vertical"){
            costos = 250.00;
            cout << "El valor del instrumento es: " << costos;
        }else if(estilo == "de cola"){
            costos = 290.00;
            cout << "El valor del instrumento es: " << costos;
        }


    }

    instrumentos c(nombre, material, costos, estilo);
    this->instrumentostotales.push_back(c);

}

void cuerda::listarinstrumentos()
{

        if(this->instrumentostotales.empty()){
            cout << "No hay ningun instrumento de cuerda\n";
        }else{
            for(instrumentos c : this->instrumentostotales){
                cout << "------INSTRUMENTOS DE CUERDA----------\n";
                cout << c.informacion1();
            }
        }


}


string cuerda::afinar()
{
    string nombre;
    return "Nombre: " + nombre + "Ajustando cuerda";
}


