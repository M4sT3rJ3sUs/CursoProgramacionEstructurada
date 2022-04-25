#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x,y,aux;

    printf("*Ingrese el valor de X: ");
    scanf("%i", &x);
    printf("*Ingrese valor de Y: ");
    scanf("%i", &y);

    aux = x;
    x = y;
    y = aux;

    printf("El valor intercambiado de X es: %i \n", x);
    printf("El valor intercambiado de Y es: %i \n", y);

    return 0;
}
