// Considere um vetor V que armazena 10 números inteiros pares e 10 números inteiros ímpares todos em-
// baralhados, ou seja, sem qualquer ordem preestabelecida. Faça um algoritmo para ler este vetor do teclado e
// depois organizá-lo de modo que os números pares fiquem nas posições ímpares do vetor e os números ímpares
// fiquem nas posições pares do vetor.
// Crie e utilize duas funções: uma para preencher o vetor pelo teclado e o outra para organizá-lo.
// Obs. 1: Não é permitido utilizar qualquer outra estrutura de dados, além do vetor V , para realizar/auxiliar
// a organização;
// Obs. 2: Não é permitido realizar qualquer tipo de ordenação no vetor.

#include <stdlib.h>
#include <stdio.h>

void fillArray(int *array, int size);
void sortArray(int *array, int size);
void printArray(int *array, int size);

int main() {
    int array_size = 20;
    int numbers[array_size];
    fillArray(numbers, array_size);
    printArray(numbers, array_size);
    sortArray(numbers, array_size);
    printArray(numbers, array_size);
}

void fillArray(int *array, int size) {
    for (int i = 0; i < size; i ++) {
        printf("\nEnter the array %dº number: ", i);
        scanf("%d", &array[i]);
    }   
    return;
}

void printArray(int *array, int size) {
    printf("Array");
    for (int i = 0; i < size; i ++) {
        printf("; %d ", array[i]);
    }    
    return;
}

void sortArray(int *array, int size) {
    int contPar = 0;
    int contImpar = 1;
    int auxArray[size];
    for (int i = 0; i < size; i ++) {
        if (((array[i] % 2) != 0) && (contPar < size)) {
            auxArray[contPar] = array[i];
            contPar += 2;
        } else if (contImpar < size) {
            auxArray[contImpar] = array[i];
            contImpar += 2;
        } else {
            printf("Array Overflow!");
            return;
        }
    }

    for (int i = 0; i < size; i++) {
        array[i] = auxArray[i];
    }
    
    return;
}