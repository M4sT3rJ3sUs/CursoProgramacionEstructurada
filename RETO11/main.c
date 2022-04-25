#include<stdio.h>
#include <stdlib.h>

int main()
{
    printf("SUMA DE FILAS ARREGLO BIDIMENCIONAL\n\n");

    int res;
    int arrayB[3][4] = {  { 1, 2, 3, 4},
                          { 5, 6, 7, 8},
                          { 9, 10, 11, 12}};

    res = arrayB[0][0] + arrayB[0][1] + arrayB[0][2] + arrayB[0][3];
    printf("*Primera fila: %d \n", res);

    res = arrayB[1][0] + arrayB[1][1] + arrayB[1][2] + arrayB[1][3];
    printf("*Segunda fila: %d \n", res);

    res = arrayB[2][0] + arrayB[2][1] + arrayB[2][2] + arrayB[2][3];
    printf("*Tercera fila: %d \n", res);

    return 0;
}
