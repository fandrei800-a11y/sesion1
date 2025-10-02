#include "NodeCola.hpp"

class Cola
{
public:
    Cola();
    ~Cola();

    void insertar(int v);
    int eliminar();
    void mostrar();
    int verPrimero();

private:
    prodoCola primero, ultimo;
    int longitud;
};