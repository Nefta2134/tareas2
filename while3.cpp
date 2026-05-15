
//ejersicio 4 menu interactivo
#include <iostream>
using namespace std;
int main() {
    int opcion=0 ;

    while (opcion != 4) {
        cout << "/////////////////////////////" << endl;
        cout << "|       MENU                |" << endl;
        cout << "|---------------------------|" << endl;
        cout << "|1. mensaje motivacional    |"<< endl;
        cout << "|2. consejo                 |" << endl;
        cout << "|3. chiste                  |" << endl;  
        cout << "|4. Salir                   |" << endl;
        cout << "|///////////////////////////|" << endl;

        cin >> opcion;

        if (opcion == 1) {
            cout << "!tu puedes!" << endl;
        } 
        else if (opcion == 2) {
            cout << "deberoas de estudiar mas para salir mejor" << endl;
        } 
        else if (opcion == 3) {
            cout << "porque la gallina cruzo la calle???" << endl;
            cout<<"/////////////////////////////////////////"<<endl;
            cout<<"no se xd"<<endl;
        } 
        else if (opcion == 4) {
            cout << "hasta la proxima" << endl;
        } 
        else {
            cout << "aun no esta disponible" << endl;
        }

       cout << endl;
    }

    return 0;
}