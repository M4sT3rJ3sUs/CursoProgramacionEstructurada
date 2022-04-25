#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;

    printf("BUSCADOR DEL NUMERO MENOR DE DOS NUMEROS \n\n");
    printf("*Ingresa el primer numero: ");
    scanf("%i", &primerNumero);

    printf("*Ingresa el segundo numero: ");
    scanf("%i", &segundoNumero);

    if(primerNumero < segundoNumero)
    {
        printf("\nEl numero menor es: %i", primerNumero);
    }else
    {
        printf("\nEl numero menor es: %i", segundoNumero);
    }

    return 0;
}
