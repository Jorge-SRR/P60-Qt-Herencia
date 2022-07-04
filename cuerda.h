#ifndef CUERDA_H
#define CUERDA_H
#include "instrumentos.h"
#include <vector>

class cuerda : public instrumentos
{
private:
    vector <instrumentos> instrumentostotales;
public:
    cuerda();
    cuerda(string nombre, string material, float costo, string estilo);

    void fichainst();
    void listarinstrumentos();

    string afinar();
};

#endif // CUERDA_H
