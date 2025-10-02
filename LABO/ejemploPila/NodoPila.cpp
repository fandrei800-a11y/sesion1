#include "NodePila.hpp"

NodePila::NodePila(int v, NodePila* sig)
{
    valor = v;
    siguiente = sig;
}

NodePila::~NodePila()
{
    // Destructor - se puede expandir si es necesario
}