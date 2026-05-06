#include <iostream>

using namespace std;

int main()
{
    int cm;
    int opcion;
    int metros;
    int kilometro;
    int opcion1;
    int suma1 = 0;
    cout << "ingrese el numero de opcion que quiera realizar" << endl;
    cout << "1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas" << endl;
    cin >> opcion;

    switch (opcion)

    case 1:

    {

        cout << "ingrese por favor la cantidad de cm a convertir" << endl;
        cin >> cm;
        suma1 = cm * 0.393701 ;
        cout << suma1 << "pulgadas" << endl;
        break;
        
        case 2:

        cout<<"ingrese porfavor la cantidad de metros a convertir"<<endl;
        cin >> metros;
        suma1= metros*3.28084;
        cout << suma1 << "pies"<<endl;
        
        break;
        
        case 3:

        cout<<"ingrese porfavor la cantidad de kilometros a convertir";
        cin>> kilometro;
        suma1=kilometro*1.60934;
        cout <<suma1<<"millas";

        break;




    }

    return 0;
}