/*
#include <stdio.h>

int main()
{
    int x;
    printf("Ingresa el valor: \n");
    scanf("%d", &x);

    x %=  5;
    x++;

    printf("x: %d \n", x);

    return 0;
}*/

#include <stdio.h>

int main()
{
    int x = 10;

    x += x * 2;
    printf("x: %d \n", x);

    return 0;
}

