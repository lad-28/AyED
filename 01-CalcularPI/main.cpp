#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    double i=0,pi=0,serie=0;

    for (i;i<= 1599999; i++)
    {
        serie+= pow((-1),i)/((2*i)+1);

        pi= serie*4;
    }

cout.precision(8);

cout<<"El valor de pi es: "<<pi<<endl;

cout<<"El numero de iteraciones para llegar al valor es de: "<<i-1<<endl;

    system("PAUSE");
    return 0;
}
