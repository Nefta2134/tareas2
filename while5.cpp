//suma de numeros pares de 1 hasta n

#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int i = 1;

    cout << "bienvenido ingrese el numero hasta donde quiere realizar su suma: ";
    cin >> numero;

    while (i <=numero)
     {

    if (i % 2 == 1)
     {

     suma = i+suma;

     }
        i++;
    }

    cout << "la suma de los de pares es: " << suma << endl;

    return 0;
}