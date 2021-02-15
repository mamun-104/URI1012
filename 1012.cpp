#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO,RETANGULO;

    cin>>a>>b>>c;

    TRIANGULO = (0.5)*a*c;
    CIRCULO = 3.14159 * pow(c,2);
    TRAPEZIO = ((a+b)/2.0)*c;
    QUADRADO = pow(b,2);
    RETANGULO = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO,RETANGULO);



    return 0;
}


