/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    uso de los arreglos para el conteo de diferentes caracteres
    capitulo2, arreglos, if-else if-else, condiciones
    herramientas: arreglos
*/

#include <stdio.h>
/* cuenta digitos, espacios blanco y otros*/

main() {
    int  c, i, nwhile, nother;
    int ndigit[10];
    // definition array
    nwhile= nother = 0;
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }
    // terminar el programa con ctrl + z en windows
    while ((c=getchar()) != EOF)
    {
        if( c>= '0' && c <= '9') {
            // incrementar array
            ++ndigit[c-'0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhile;
        } else {
            ++nother;
        }
    }
    // Impresion por pantalla
    printf("digitos ="); // imprimir array
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", espacios en blanco = %d, otros = %d\n", nwhile, nother);
    
    
}