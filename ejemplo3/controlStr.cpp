#include <iostream> //<stdio.h>C
#include <cmath>
using namespace std;
int main()
{
    int a = 5, b = 59;
    int num1, num2;
    if (a > b)
    {
        cout << "a greater than b" << endl;
    }
    else if (a == b)
    {
        cout << "a less than b" << endl;
    }
    else
    {
        cout << "a less b" << endl;
    }
    cout << "ingrese dos numeros enteros: " << endl; // std::cout//printf()
    cin >> num1 >> num2;                             // std::cin//scanf()
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        cout << "Los dos numeros son pares:";
    }
    else if (num2 % 2 == 0)
    {
        cout << "El numero 2 es par y el numero 1 es impar";
    }
    else if (num1 % 2 == 0)
    {
        cout << "El numero 1 es par y el numero 2 es impar";
    }
    else
    {
        cout << "Los dos numeros son impares";
    }

    //
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        cout << "Los dos numeros son pares:";
    }
    else if (num2 % 2 == 0 && num1 % 2 != 0)
    {
        cout << "El numero 2 es par y el numero 1 es impar";
    }
    else if (num1 % 2 == 0 && num2 % 2 != 0)
    {
        cout << "El numero 1 es par y el numero 2 es impar";
    }
    else
    {
        cout << "Los dos numeros son impares";
    }

    if (num1)
        cout << "El numero es identificado como true";

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = pow(2, i);
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }
    int matr[3][3];
    matr[0][0] = 0;
    int *pointerToInt;
    pointerToInt = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        *pointerToInt = 5 - i;
        cout << "arr[" << i << "]: " << arr[i] << endl;
        pointerToInt++;
        // if(asdfsda)break;
    }
    double decimal = 3.144545;
    double *doublePointer;
    // pointerToInt=&decimal;
    doublePointer = &decimal;
    cout << "Decimal value before modification: " << *doublePointer << endl;
    *doublePointer = 5.26568152;
    cout << "Decimal value after modification: " << decimal << endl;
    *doublePointer++;
    char continueVar = 'q';
    num1 = 0;
    while (continueVar == 'y' || continueVar == 'Y')
    {
        cout << "You have run the while cicle " << num1 + 1 << "times" << endl;
        cout << "Enter 'y' to continue within the while" << endl;
        num1++;
        cin >> continueVar;
        if (num1 > 5)
            break;
    }
    num1 = 1;
    continueVar = 'q';
    do
    {
        cout << "You have run the do while cicle " << num1 << " times" << endl;
        cout << "Enter 'q' to quit the cycle" << endl;
        cin >> continueVar;
        num1++;
    } while (continueVar != 'q');

    short code = 200;
    continueVar='y';
    while (continueVar == 'y')
    {
        switch (code)
        {
        case 200:
            cout << "ok http response" << endl;
            break;
        case 404:
            cout << "Not found http response" << endl;
            break;
        case 500:
            cout << "Iternal service http response" << endl;
            break;
        default:
            cout << "Unknown http response" << endl;
            break;
        }
        cout << "Enter an http response code" << endl;
        cin >> code;
        cout << "Enter 'y' to continue within the while" << endl;
        cin >> continueVar;
    }
}