#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numUsuario;

    int numero = 5;

    printf("Ingresa un numero entre 0 y 10 \n");
    scanf("%i", &numUsuario);

    if(numero == numUsuario)
    {
        printf("\n");
        printf("ADIVINASTE :D ");
    }else
    {
        printf("FALLASTE :( \n");
    }

    return 0;
}
