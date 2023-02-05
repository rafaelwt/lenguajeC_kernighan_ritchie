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
    int fahr, celsius;
    int lower, upper, step;
    // Inicializacion de variable
    lower = 0;
    upper = 300;
    step = 20;
    // printf("%d\n",upper);

    fahr = lower;
    // iteracion
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}