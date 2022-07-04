//Librerías a utilizar
#include <iostream>
#include "instrumentos.h"
#include "cuerda.h"
#include "viento.h"
#include "percucion.h"
//Declaro que usaré el bloque (namespace) std (Estándar) esto para encapsular los métodos, clases, etc.
//Se lo usa para evitar invocar a la biblioteca, sin  esto debería usar: std::cout, por ejemplo.
using namespace std;
int instrumentos::nInstrumento = 0;

int main()
{
    int op = 0;
    string tipo;

    cuerda c;
    viento v;
    percucion p;
    instrumentos i;
    do{

        do{

            cout << "\nAutor: Jorge Sebastian Reinoso Reyes\n";
            cout << "Docente: Rodrigo Tufinio\n";
            cout << "Fecha: 02-05-2022\n";
            cout << "\n-------Escoja una opcion-------\n";
            cout << "1. Ingreso de los datos del instrumento\n";
            cout << "2. Lista de los instrumentos\n";
            cout << "3. Afinar todos los instrumentos\n";
            cout << "4. Total de instrumentos\n";
            cout << "5. Salir \n";
            cin >> op;
            if(op>5){
                cout << "\n--------Incorrecto---------\n";
            };

        }while(op>5);

        switch (op) {
        case 1:

            cout << "De que tipo es tu instrumento(cuerda / viento / percucion)?\n";
            cin >> tipo;
            if(tipo == "cuerda"){
                c.fichainst();
            }else if(tipo == "viento"){
                v.daFicha();
            }else if(tipo == "percucion"){
                p.Fichainst();
            }
            break;
        case 2:
            cout << "\n-------LISTA DE INSTRUMENTOS---------\n";
            c.listarinstrumentos();
            v.listarinstru();
            p.listarinstrumentos();
            break;
        case 3:
            cout << "----------AFINAR LOS INSTRUMENTOS----------\n";
            cout << c.afinar() << endl;
            cout << v.afinar() << endl;
            cout << p.afinar() << endl;
            break;
        case 4:
            cout << "---------NUMERO TOTAL DE INSTRUMENTOS------------\n";
            cout << i.nInstrumento;
            break;
        case 5:
            cout << "---------FIN DEL MENU-------\n";
            break;
        default:
            break;
        }



    }while(op!=5);
    cout << "-------FIN DE LA EJECUCION------\n";


    return 0;
}
