#Pils : clase Pila.cpp

#include "Pila.hpp"
{
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(int v)
{
    prodoPila nuevo;
    nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}

int Pila::extraer()
{
    prodoPila nodo;
    int v;
    if(!ultimo)
        return 0;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}

int Pila::cima()
{
    prodoPila nodo;
    if(!ultimo)
        return 0;
    return ultimo->valor;
}

void Pila::mostrar()
{
    prodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ", while(aux)
    {
        cout << "-> " << aux->valor;
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getlongitud() { return this->longitud; }

Pila::~Pila()
{
    prodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}