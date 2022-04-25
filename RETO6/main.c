#include <stdio.h>
#include <stdlib.h>

int main()
{
    int caminoElegido;

    printf("ELIGE LA OPCION CORRECTA \n\n");
    printf("Una persona nesecita viajar pero esta lloviendo que debe hacer? \n");

    printf("1. Viajar en moto con impermeable: \n");
    printf("2. Viajar en coche hacia su destino: \n");
    printf("3. Esperar a que pase la lluvia sin importar el retraso: \n\n");

    scanf("%i", &caminoElegido);

    switch(caminoElegido)
    {
        case 1:
            printf("Sucede un accidente y el viajero por poco no la cuenta :c \n");
            break;

        case 2:
            printf("Por tanta lluvia el auto resbala y se sale de la carretera. \n");
            break;

        case 3:
            printf("La lluvia no dura tanto y el viajero logra llegar asu destino. \n");
            break;

        default:
            printf("Al no elegir una opcion valida el viajero se molesta. \n");
            break;
    }
}
