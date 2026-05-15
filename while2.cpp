//ejersicio 7 Cuenta Regresiva Solicita un número y muestra una cuenta regresiva hasta 0.

#include <iostream>
using namespace std;
int main() 

  
{       
    int n; 
    cout << "Ingrese por favor un dato: ";
    cin >> n;      
    do {

        cout << n << endl; 
        n = n - 1;         
    } 
    while (n >=0);       

    return 0;
}