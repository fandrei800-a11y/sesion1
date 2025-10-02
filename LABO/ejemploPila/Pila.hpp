#ifndef PILA_HPP
#define PILA_HPP

#include "NodePila.hpp"

class Pila
{
public:
    Pila();
    ~Pila();
    void insertar(int v);
    int extraer();
    int cima();
    void mostrar();
    int getLongitud();

private:
    pnodePila ultimo;
    int longitud;
};

#endif