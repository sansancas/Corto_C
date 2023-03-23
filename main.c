/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "libreria.h"
int main()
{
    int a, b;
    float c;
    printf("ingrese el valor de a: ");
    scanf("%d", &a);
    printf("ingrese el valor de b: ");
    scanf("%d", &b);
    c = suma(a, b);
    printf("el resultado de la suma es: %f\n", c);
    c = resta(a, b);
    printf("el resultado de la resta es: %f\n", c);
    c = multi(a, b);
    printf("el resultado de la multiplicación es: %f\n", c);
    c = divi(a, b);
    printf("el resultado de la división es: %f\n", c);
    printf("pi con cinco decimales: %f\n", PI);
    return 0;
}