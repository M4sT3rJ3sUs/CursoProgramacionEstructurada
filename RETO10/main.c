#include<stdio.h>
#include <stdlib.h>

int main()
{
    printf("MULTIPLICADOR DE VALORES DEL ARREGLO\n\n");

    int res;
    int elementos[5];

    printf(">Ingresa los Valores<\n\n");
    printf("*Valor[1]: ");
    scanf("%d", &elementos[0]);

    printf("*Valor[2]: ");
    scanf("%d", &elementos[1]);

    printf("*Valor[3]: ");
    scanf("%d", &elementos[2]);

    printf("*Valor[4]: ");
    scanf("%d", &elementos[3]);

    printf("*Valor[5]: ");
    scanf("%d", &elementos[4]);

    res = elementos[0] * elementos[1] * elementos[2] * elementos [3] * elementos[4];

    printf("\nEl resultado es: %d\n", res);

    return 0;
}
