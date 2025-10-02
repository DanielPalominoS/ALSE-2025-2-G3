#include "Complex.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;
int main()
{
    Complex c1;           // Llama al constructor por defecto
    Complex c2(2.3, 5.0); // Llama al constructor general
    Complex c3(c2);       // Llama al constructor de copia

    c1.SetData(); // Solicita al usuario que introduzca los valores real e imaginario
    cout << "Complejo 1: " << c1.GetReal() << " + " << c1.GetImag() << "i" << endl;
    cout << "Complejo 2: " << c2.GetReal() << " + " << c2.GetImag() << "i" << endl;
    cout << "Complejo 3 (copia de Complejo 2): " << c3.GetReal() << " + " << c3.GetImag() << "i" << endl;

    Complex suma = c1 + c2; // Suma de dos números complejos
    cout << "Suma: " << suma.GetReal() << " + " << suma.GetImag() << "i" << endl;

    Complex resta = c1 - c2; // Resta de dos números complejos
    cout << "Resta: " << resta.GetReal() << " + " << resta.GetImag() << "i" << endl;

    Complex producto = c1 * c2; // Producto de dos números complejos
    cout << "Producto: " << producto.GetReal() << " + " << producto.GetImag() << "i" << endl;
    cout << c1 << " " << c2 << endl;

    Vehicle v1("Toyota", 120);
    v1.display();
    v1.setSpeed(150);
    cout << "Updated Speed: " << v1.getSpeed() << " km/h" << endl;
    v1.display();

    return 0;
}