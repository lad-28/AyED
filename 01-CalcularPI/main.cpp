#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    float i=0, serie=0, pi=0, aux=0;
       do
        {
           serie += pow((-1),i)/((2*i)+1);
           pi = 4*serie;
           aux = abs(pi-3.141592);
           i+=1;
        }
        while (aux > 0.0000001);

cout.precision(7);

cout<<"El valor de pi es: "<<pi<<endl;

cout<<"El numero de iteraciones para llegar al valor es de: "<<i-1<<endl;

    cin.get();
    return 0;
}
