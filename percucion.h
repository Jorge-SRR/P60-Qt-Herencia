#ifndef PERCUCION_H
#define PERCUCION_H
#include "instrumentos.h"
#include <vector>
class percucion : public instrumentos
{
private:
    vector <instrumentos> instrumentostot;
public:
    percucion();
    percucion(string nombre, string material, float altura, float costo);

    void Fichainst();
    void listarinstrumentos();

    string afinar();


};

#endif // PERCUCION_H
