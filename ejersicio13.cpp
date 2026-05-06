//Zodíaco según el mes Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.

#include <iostream>
using namespace std;

int main()
{
    int mes;


    cout << "Ingrese su mes de nacimiento porfavor " << endl;
    cout << "1. Enero a Febrero " << endl;
    cout << "2. Marzo a Abril " << endl;
    cout << "3. Mayo a Junio " << endl;
    cout << "4. Julio a Agosto " << endl;
    cout << "5. Septiembre a Octubre " << endl;
    cout << "6. Noviembre a Diciembre " << endl;
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "Tu signo es acuario. " << endl;
        break;
    case 2:
        cout << "Tu signo es aries. " << endl;
        break;
    case 3:
        cout << "tu signo es geminis. " << endl;
        break;
    case 4:
        cout << "Tu sigo es cancer. " << endl;
        break;
    case 5:
        cout << "Tu signo es libra. " << endl;
        break;
    case 6:
        cout << "tu signo es sagitario. " << endl;
        break;

    default:
        cout << "Opcion no valida" << endl;
    }

    return 0;



}