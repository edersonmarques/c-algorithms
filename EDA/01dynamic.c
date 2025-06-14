#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define ORDER 4

int **generateMatrice(int order);
void freeMatrice(int order, int **matrice);
void printMatrice(int order, int **matrice);
int generateTransposedMatrice(int order, int **matrice);
int multiplyMatrices(int order, int **matriceA, int **matriceB);
int isOrthogonal(int order, int **matrice);

int main() {
    int order;
    printf("Enter the matrice order: ");
    scanf("%d", &order);
    system("clear");
    int **numbersMatrice = generateMatrice(order);
    printMatrice(order, numbersMatrice);
    freeMatrice(order, numbersMatrice);
    return 0;
}

int **generateMatrice(int order) {
    int **matrice = malloc(sizeof(int*) * order);
    for (int i = 0; i < order; i++) {
        matrice[i] = malloc(sizeof(int) * order);
    }
    srand(time(NULL));
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            matrice[i][j] = rand() % 30;
        }
        
    }
    return matrice;
}

void freeMatrice(int order, int **matrice) {
    for (int i = 0; i < order; i++) {
        free(matrice[i]);
        matrice[i] = NULL;
    }
    free(matrice);
    matrice = NULL;
    return;
}

void printMatrice(int order, int **matrice) {
    for (int i = 0; i < order; i ++) {
        printf("\n\t");
        for (int j = 0; j < order; j ++) {
            if (j == 0) {
                printf("|%3d", matrice[i][j]);
            } else if (j == order - 1) {
                printf("%3d|", matrice[i][j]);
            } else {
                printf("%3d", matrice[i][j]);
            }
        }
    }
}

int generateTransposedMatrice(int order, int **matrice) {
    int **transposedMatrice;
    //to do
    return transposedMatrice;
}

int  multiplyMatrices(int order, int **matriceA, int **matriceB) {
    int **productMatrice;
    //to do
    return productMatrice;
}

int isOrthogonal(int order, int **matrice) {
    //to do
    return 0;
}
