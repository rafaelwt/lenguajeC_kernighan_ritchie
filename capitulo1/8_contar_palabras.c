/*
    CURSO C LIBRO DE KERNIGHAN Y RITCHIE
    programa flujo de datos de entrada y salida
    capitulo1, variables , expresion , iteraciones y decisiones
    modifacacion: contar palabraas, if else , define
*/
#include <stdio.h>
#define IN 1 // Esta dentro de la palabra
#define OUT 0 // Esta fuera de la palabra
main()
{
    int c, nl, nw, nc, state;
    // nl = 0;
    // nw = 0;
    // nc = 0;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        state = OUT;
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }
    printf("%d %d %d \n", nl, nw, nc);
}