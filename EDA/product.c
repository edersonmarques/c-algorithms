// Considere dois números inteiros a (a != 0) e b (b ≥ 0) lidos pelo teclado. Faça um algoritmo recursivo para
// calcular o valor de ab .
// Crie e utilize uma função recursiva para calcular ab . Esta informação tem que ser impressa na função main.
// Obs.: Não é permitido utilizar qualquer estrutura de repetição na função recursiva.

#include <stdio.h>
#include <stdlib.h>

int product(int a, int b);

int main() {
    int a, b, p;
    system("clear");
    printf("\n\nEnter number a (a != 0): ");
    scanf("%d", &a);
    printf("\n\nEnter number b (b >= 0): ");
    scanf("%d", &b);

    p = product(a, b);

    system("clear");
    printf("\n\nThe product between %d and %d is: %d\n\n", a, b, p);

    return 0;
}

int product(int a, int b) {
    if (b > 0) {
         
        return a + product(a, b - 1);
    } else {
        return 0;
    }
}