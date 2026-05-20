#include <iostream>
using namespace std;


//Tabla de Multiplicar pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.

int n;
int suma=0;
int main()


{
cout<<"brindenme un numero del 1 al 10 y le dare la tabla correspondiente"<<endl;
cin>>n;

if (n<0 || n>10)
{
    cout <<"error"<<endl;
}
else;
{
for ( int i=1; i <= 10; i++)
{
cout<< n << "x" << i << "=" << n*i << endl;
   
}
}






    return 0;

}