#include<stdio.h>
#include<string.h>

int main()
{
    printf("INVERSOR DE PALABRAS \n\n");

    char frase[50];

    printf("*Ingresa una palabra: ");
    gets(frase);
    printf("\n");
    for(int i = 0; i < strlen(frase); i++)
    {

        printf("%c", frase[(strlen(frase) - 1) - i]);
    }

    return 0;
}
