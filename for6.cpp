// Suma de Números Pares Solicita un número N al usuario y calcula la suma de los números pares desde 1 hasta N.
#include <iostream> 
using namespace std;

int main()
{
    int n;
    int suma=0;

    cout <<"bienvenido ingrese porfavor un numero"<<endl;
    cout <<"en base a ese numero sumaremos los pares"<<endl;
    cin >> n; 

    for ( int i=1 ; i <= n ; i++)
    {
        if (i%2==0)
        
       
        
        suma = suma + i;

        
        
        
    }

    cout<< suma << endl;
    



return 0;


}