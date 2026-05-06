#include <iostream>

//Sistema de Puntuación de Videojuegos Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño
using namespace std;

int main()
{
    int estrellas;
    cout << "Ingresa tu puntuacion (1-5): estrellas ";
    cin >> estrellas;

    switch (estrellas)
    {
        case 1:

            cout << "Sigue intentando!" << endl;
            break;
        case 2:

            cout << "necesitas practicar mas" << endl;
            break;
        case 3:

            cout << "jugador promedio!" << endl;
            break;
        case 4:

            cout << "Muy bien!" << endl;
            break;
        case 5:

            cout << "Increible!" << endl;
            break;

        default:
            cout << "Puntuacion invalida ingresa un numero entre 1 y 5" << endl;
            break;
    }

return 0;





}