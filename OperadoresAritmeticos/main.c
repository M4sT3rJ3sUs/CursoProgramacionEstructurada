#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7+3;
    rRes = 7.1 - 3.1;
    rDiv = 7.0 / 3.0;
    rMult = 7*3;
    rMod = 7%3;

    printf("Resultado de Suma: %i \n", rSum);
    printf("Resultado de Resta: %f \n", rRes);
    printf("Resultado de Division: %f \n", rDiv);
    printf("Resultado de Multiplicacion: %f \n", rMult);
    printf("Resultado de Modulo: %i \n", rMod);


    return 0;
}
