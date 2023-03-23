/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main() {
int i, n;
  int a = 0, b = 1;
  int sig = a + b;
  printf("ingrese la cantidad de veces que desea realizar la secuencia fibonaci: ");
  scanf("%d", &n);
  printf("Serie Fibonaci: %d, %d, ", a, b);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", sig);
    a = b;
    b = sig;
    sig = a + b;
  }
  return 0;
}
