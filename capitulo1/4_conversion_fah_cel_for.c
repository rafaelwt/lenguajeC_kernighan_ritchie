/*
    CURSO C LIBRO DE KERNIGHAN & RITCHIE
    programa que convierte de grados Fahrenheit a Celsius

    1.8 * (fahr - 32.0) = celsius
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr = 0, 20, ..., 300
main()
{
    // Declaracion de variables
    float fahr, celsius;
    // Inicializacion de variable

    // printf("%d\n",upper);

    // iteracion
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%3.0f\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}