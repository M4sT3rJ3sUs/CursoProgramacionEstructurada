/*
#include <stdio.h>
#include <stdlib.h>

float calcularExponente(float valorA, float valorB)
{
    float res = valorA;
    for(int i = 1; i < valorB; i++)
        res = res * valorA;
    return res;
}

int main()
{
    printf("POTENCIA DE UN NUMERO \n\n");
    float valA, valB, res;

    printf("*Base: ");
    scanf("%f", &valA);

    printf("*Exponente: ");
    scanf("%f", &valB);

    res = calcularExponente(valA, valB);

    printf("\n\nEl resultado es: %f ", res);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

float ConvertUSD(float usd)
{
    float result;
    result = (usd * 20.57)/1;
    return result;
}

float ConvertMXN(float mxn)
{
    float result;
    result = (mxn * 0.049)/1;
    return result;
}

int main()
{
    char inputAnswer;
    float inputAmmount;

    printf("CONVERSOR DE DOLARES A PESOS O VICEVERSA \n\n");
    printf("Si quieres convertir de dolares a pesos presiona P: \n");
    printf("Si quieres convertir de pesos a dolares presiona D: \n\n");
    printf("¿RESPUESTA?: \n");
    scanf("%c", &inputAnswer);

    printf("\n*Escribe la cantidad que quieres cambiar: ");
    scanf("%f", &inputAmmount);

    if(inputAnswer == 'P')
    {
        printf("*El resultado es: %f", ConvertUSD(inputAmmount));
    }else if(inputAnswer == 'D')
    {
        printf("*El resultado es: %f", ConvertMXN(inputAmmount));
    }

    return 0;
}









