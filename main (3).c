/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a, suma;
    printf("Ingrese el valor en Farenheit a convertir a Celcius: ");
    scanf("%f", a);
    suma = (a - 32) * 5/9;
    printf("Su valor en Celsius es: %f/n", suma);
    return 0;
}