// Considere um vetor com 20 números naturais maiores do que 1 lidos pelo teclado. Faça um algoritmo
// recursivo que organize este vetor de modo que os números compostos fiquem nas primeiras posições e os
// números que não são compostos nas últimas posições.
// Crie e utilize duas funções: uma para preencher o vetor e outra recursivo para realizar a organização do
// mesmo. Crie e utilize também outra função para retornar 1, se um número natural for composto, ou retornar
// 0, caso contrário.
// Obs. 1: Um número natural C é composto se ele tem mais de dois divisores naturais distintos;
// Obs. 2: Não é permitido utilizar qualquer estrutura de dados para auxiliar a organização;
// Obs. 3: Não é permitido utilizar qualquer estrutura de repetição na função recursiva.
#include <stdio.h>
#include <stdlib.h>

void fillArray(int size, int *array);

int main() {
    int array[20];
    fillArray(20, array);

    return 0;
}

void fillArray(int size, int *array) {
    for (int i = 0; i < size; i ++) {
        system("clear");
        printf("\n\nEnter a number: ");
        scanf("%d", &array[i]);
    }
}

int isComposed(int number) {
    for (int i = 2; i <= number / 2; i ++) {
        if (number % i == 0) {
            return 1;
        }
    }
    return 0;
}

void sortArray(int size, int position, int *array) {
    if (isComposed(array[position])) {
        sortArray(size, position + 1, array);
    } else {
        int temp = array[position];
        array[position] = array[size - 1];
        array[size - 1] = temp;
        sortArray(size, position, )
    }
    return;
}