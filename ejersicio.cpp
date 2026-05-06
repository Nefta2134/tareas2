#include <iostream>
using namespace std;

int main()
{
    int transporte;

    cout << "Elige en que tipo de transporte quieres usar" << endl;
    cout << "1. Bus " << endl;
    cout << "2. Metro " << endl;
    cout << "3. Taxi" << endl;
    cin >> transporte;

    switch (transporte)
    {
    case 1:
        cout << "Tu costo es de 0.25." << endl;
        break;

    case 2:
        cout << "Tu costo es de 10.00" << endl;
        break;
    case 3:
        cout << "Tu costo es de 4.00. " << endl;
        break;

    default:
        cout << "Opcion no valida " << endl;
        
        break;
    }



    return 0;




}