/*
Gana a la maquina
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 97
#define MAX 122
main()
{
    srand(time(0));
    int letraBuscar = rand() % (MAX - MIN + 1) + MIN;
    int c = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            if (c < letraBuscar)
            {
                printf("La letra buscada es mayor que %c \n", c);
            }
            else
            {
                printf("La letra buscada es menor que %c \n", c);
            }
            if(c == letraBuscar)
            {
                printf("Ganaste encontras la letra)");
                break;
            }
        }
    }
}