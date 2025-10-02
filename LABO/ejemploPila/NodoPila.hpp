#ifndef NODEPILA_HPP
#define NODEPILA_HPP

class NodePila
{
public:
    NodePila(int v, NodePila* sig = NULL);
    ~NodePila();
private:
    int valor;
    NodePila* siguiente;
    friend class Pila;
};

typedef NodePila* pnodePila;

#endif