#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("ARRAY BIDIMENCIONAL - PROMEDIO DE CALIFICACIONES \n\n");

    float arrayB[5][6] = {  { 6, 7, 6, 7, 8, 0},
                            { 8, 8, 7, 9, 7, 0},
                            {10, 10, 9, 10, 8, 0},
                            { 10, 9, 9, 9, 8, 0},
                            { 8, 7, 6, 7, 8, 0} };


    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(j < 5)
            {
                arrayB[i][5] += arrayB[i][j];
                printf("La sumatoria de arrayB[%d][5], es: %f \n", i, arrayB[i][5]);
            }
            else
            {
                arrayB[i][j] /= 5;
                printf("\tEl promedio de la fila %d, es: %f \n", i, arrayB[i][j]);
            }
        }
    }

    return 0;
}
