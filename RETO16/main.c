#include <stdio.h>
#include <stdlib.h>

char nombreAlumno[50];
float calif;

void evaluar()
{
    if(calif >= 7.0)
        printf("\n\n El alumno %s ha sido aprobado. ", nombreAlumno);
    else
        printf("\n\n El alumno %s ha sido reprobado. ", nombreAlumno);
}

int main()
{
    printf("CALIFICACION \n\n");
    printf("*Ingresa el nombre: ");

    gets(nombreAlumno);

    printf("*Ingresa la calificacion: ");
    scanf("%f", &calif);

    evaluar(nombreAlumno, calif);

    return 0;
}
