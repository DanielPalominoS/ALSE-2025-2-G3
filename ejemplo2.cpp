#include <iostream>

struct Point
{
    /* data */
    int x;
    int y;
};

int main()
{
    Point a;
    Point b;
    a.x = 0;
    a.y = 0;
    b.x = 1;
    b.y = 1;
    if(a.x!=0 && a.y==0){
        std::cout<<"ejecutar";
    }

#ifdef debug
    std::cout << "a(" << a.x << ", " << a.y << ")\n";
#endif
    std::cout << "b(" << b.x << ", " << b.y << ")\n";
    // Declarar e inicializar variables de diferentes tipos
    int intVar = 42;      // Variable entera
    double doubleVar = 3.14; // Variable de punto flotante de doble precisión
    char charVar = 'A';    // Variable de carácter (65 cosigo ascii)

    // Imprimir el tamaño de cada tipo de variable
    std::cout << "Tamaño de int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Tamaño de double: " << sizeof(b) << " bytes" << std::endl;
    std::cout << "Tamaño de char: " << sizeof(charVar) << " bytes" << std::endl;

    // Imprimir la dirección de cada variable
    std::cout << "Dirección de char: " << static_cast<void *>(&charVar) << std::endl;
    std::cout << "Dirección de double: " << &b << std::endl;
    std::cout << "Dirección de int: " << &a << std::endl;

    // Operaciones aritméticas
    int d = 4;
    int suma = d + intVar; // Suma
    std::cout << "Suma de d y a: " << suma << std::endl;

    double sumDoubleChar = doubleVar + charVar; // Suma de double y char (char se convierte implícitamente a int)
    std::cout << "Suma de b y c: " << sumDoubleChar << std::endl;

    // Operadores de incremento y decremento
    int h = 2;
    h++;//h++ -> h=h+1;
    std::cout<<"h: "<<h<<std::endl;
    int k = h++; // Post-incremento: k se asigna el valor de h, luego h se incrementa
    
    //++h -> h=h+1;
    std::cout << "Valor de k después de post-incremento: " << k << std::endl;

    int j = ++h; // Pre-incremento: h se incrementa, luego j se asigna el valor de h
    std::cout << "Valor de j después de pre-incremento: " << j << std::endl;

    // Operadores de asignación compuesta
    h += 8; // Equivalente a h = h + 8
    std::cout << "Valor de h después de h += 8: " << h << std::endl;

    h *= 2; // Equivalente a h = h * 2
    std::cout << "Valor de h después de h *= 2: " << h << std::endl;

    h = h * 2; // Multiplicación
    std::cout << "Valor de h después de h = h * 2: " << h << std::endl;

    // Operadores adicionales
    int m = 10;
    int n = 3;
    int mod = m % n; // Operador de módulo
    std::cout << "Módulo de m y n: " << mod << std::endl;

    bool isEqual = (intVar == d); // Operador de igualdad
    std::cout << "¿a es igual a d? " << std::boolalpha << isEqual << std::endl;

    bool isGreater = (intVar > d); // Operador mayor que
    std::cout << "¿a es mayor que d? " << std::boolalpha << isGreater << std::endl;

    // Operadores binarios
    int bin1 = 5;                  // 0101 en binario
    int bin2 = 3;                  // 0011 en binario
    int binAnd = bin1 & bin2;      // AND binario = 0001
    int binOr = bin1 | bin2;       // OR binario = 0111
    int binXor = bin1 ^ bin2;      // XOR binario = 0110
    int binNot = ~bin1;            // NOT binario
    int binShiftLeft = bin1 << 1;  // Desplazamiento a la izquierda
    int binShiftRight = bin1 >> 1; // Desplazamiento a la derecha

    std::cout << "AND binario de bin1 y bin2: " << binAnd << std::endl;
    std::cout << "OR binario de bin1 y bin2: " << binOr << std::endl;
    std::cout << "XOR binario de bin1 y bin2: " << binXor << std::endl;
    std::cout << "NOT binario de bin1: " << binNot << std::endl;
    std::cout << "Desplazamiento a la izquierda de bin1: " << binShiftLeft << std::endl;
    std::cout << "Desplazamiento a la derecha de bin1: " << binShiftRight << std::endl;

    // Operadores lógicos
    bool log1 = true;
    bool log2 = false;
    bool logAnd = log1 && log2; // AND lógico
    bool logOr = log1 || log2;  // OR lógico
    bool logNot = !log1;        // NOT lógico

    std::cout << "AND lógico de log1 y log2: " << std::boolalpha << logAnd << std::endl;
    std::cout << "OR lógico de log1 y log2: " << std::boolalpha << logOr << std::endl;
    std::cout << "NOT lógico de log1: " << std::boolalpha << logNot << std::endl;

    // Operador ternario
    int ternaryResult = (intVar > d) ? intVar : d; // Si a es mayor que d, asignar a a ternaryResult, de lo contrario asignar d
    std::cout << "Resultado del operador ternario (a > d ? a : d): " << ternaryResult << std::endl;

    return 0;
}