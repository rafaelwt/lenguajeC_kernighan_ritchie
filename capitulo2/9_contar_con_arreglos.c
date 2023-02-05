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
    // definition array
    nwhile= nother = 0;

    while ((c=getchar()) != EOF)
    {
        if( c>= '0' && c <= '9') {
            // incrementar array
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhile;
        } else {
            ++nother;
        }
    }
    // Impresion por pantalla
    printf("digitos ="); // imprimir array
    printf(", espacios en blanco = %d, otros = %d\n", nwhile, nother);
    
    
}