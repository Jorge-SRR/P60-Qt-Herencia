#include "instrumentos.h"

instrumentos::instrumentos()
{
    this->numeroInstrumento = 0;
    this->tipo = " ";
    this->nombre = " ";
    this->material = " ";
    this->estilo = " ";
    this->clasifi = " ";
    this->costos = 0;
}

instrumentos::instrumentos(string nombre, string material, float costos, string estilo) : nombre(nombre), material(material),  costos(costos), estilo(estilo)
{
    instrumentos::nInstrumento++;
    this->numeroInstrumento = instrumentos::nInstrumento;
    this->costos = costos;
    this->nombre = nombre;
    this->material = material;
    this->estilo = estilo;

}

instrumentos::instrumentos(string nombre, string material, string clasificacion, float costos) : nombre(nombre), material(material), costos(costos), clasifi(clasificacion)
{
    instrumentos::nInstrumento++;
    this->numeroInstrumento = instrumentos::nInstrumento;
    this->costos = costos;
    this->nombre = nombre;
    this->material = material;
    this->clasifi = clasificacion;

}

instrumentos::instrumentos(string nombre, string material, float costos, float altura) : nombre(nombre), material(material), costos(costos), altura(altura)
{
    instrumentos::nInstrumento++;
    this->numeroInstrumento = instrumentos::nInstrumento;
    this->costos = costos;
    this->nombre = nombre;
    this->material = material;
    this->altura = altura;
}



string instrumentos::informacion1()
{
    string ficha = " \t==== INFORMACION DEL INSTRUMENTO ====\n "
                   "Instrumento numero: " + to_string(this->numeroInstrumento) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Material: " + this->material + "\n" +
            "Estilo: " + this->estilo + "\n" +
            "Costo: "+ to_string(this->costos) + "\n\n";

    return ficha;
}

string instrumentos::informacion2()
{
    string ficha = " \t==== INFORMACION DEL INSTRUMENTO ====\n "
                   "Instrumento numero: " + to_string(this->numeroInstrumento) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Material: " + this->material + "\n" +
            "Clasificacion: " + this->clasifi + "\n" +
            "Costo: "+ to_string(this->costos) + "\n\n";

    return ficha;
}

string instrumentos::informacion3()
{
    string ficha = " \t==== INFORMACION DEL INSTRUMENTO ====\n "
                   "Instrumento numero: " + to_string(this->numeroInstrumento) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Material: " + this->material + "\n" +
            "Altura: " + to_string(this->altura) + "\n" +
            "Costo: "+ to_string(this->costos) + "\n\n";
    return ficha;
}

string instrumentos::afinar()
{
    return "Afinando";
}


