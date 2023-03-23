/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main() {
    int a[5];
    int *p = a;
    for (int i = 0; i < 5; i++) {
        printf("Ingresa un entero para la posición %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Los elementos del array multiplicados por 2 son:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p * 2);
        p++;
    }
    return 0;
}
