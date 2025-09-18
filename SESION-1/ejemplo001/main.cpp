#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int x, y, z;
    cout << "Introduzca el primer numero: ";
    cin >> x;
    cout << "Introduzca el segundo numero: ";
    cin >> y;
    z = x + y;
    cout << "La suma " << x << " mas " << y << " es igual a " << z << "." << endl;
    
    // Agrega esto para que espere antes de cerrar
    cout << "Presione Enter para continuar...";
    cin.ignore();
    cin.get();
    
    return 0;
}