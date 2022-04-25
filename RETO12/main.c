#include<stdio.h>
#include <stdlib.h>

int main()
{
    printf("NUMERO MAS GRANDE DEL ARREGLO \n\n");

    int tam;
    printf("Tamaño del arreglo: \n");
    scanf("%d", &tam);

    int numeros[tam];
    int mayor;

    printf(">Ingresa los valores< \n\n");

    for(int i = 0; i < tam; i++)
    {
        printf("*Valor[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    mayor = numeros[0];
    for(int i = 1; i < tam; i++)
        if(numeros[i] > numeros[i-1])
            mayor = numeros[i];

    printf("\nEl numero mayor es: %d \n\n", mayor);

    return 0;
}
