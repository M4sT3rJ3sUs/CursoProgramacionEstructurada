#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    float radioCilindro;
    float alturaCilindro;
    float areaBaseCilindro;
    float volumenCilindro;

    printf("CALCULAR AREA DE CILINDRO \n");

    printf("+Ingrese el radio de la base: ");
    scanf("%f", &radioCilindro);
    printf("+Ingrese la altura del Cilindro: ");
    scanf("%f", &alturaCilindro);

    areaBaseCilindro = 3.1416 * (radioCilindro * radioCilindro);
    volumenCilindro = areaBaseCilindro * alturaCilindro;

    printf("El area de la base es: %f \n", areaBaseCilindro);
    printf("El volumen del cilindro es: %f \n", volumenCilindro);

    return 0;
}
*/

int main()
{
    float farenheit, celsius;

    printf("FAHRENHEIT A CELSIUS \n");

    printf("Ingresa los grados farenheit: ");
    scanf("%f",&farenheit);

    celsius = ((farenheit - 32) / 9) * 5;

    printf("La conversión a grados celsius es: %f \n", celsius);

    return 0;
}

