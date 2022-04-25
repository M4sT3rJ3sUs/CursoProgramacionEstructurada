#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite = 15;
    int anterior = 1;
    int siguiente = 1;
    int actual = 0;

    printf("%i \n", anterior);

    for(int i = 1; i < limite; i++)
    {
        actual = anterior + siguiente;
        anterior = siguiente;
        siguiente = actual;

        printf("%i \n", actual);
    }

    return 0;
}
