#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **generateEmptyMatrice(int order);
int **generateMatrice(int order);
void freeMatrice(int order, int **matrice);
void printMatrice(int order, int **matrice);
int **generateTransposedMatrice(int order, int **matrice);
int **multiplyMatrices(int order, int **matriceA, int **matriceB);
int isOrthogonal(int order, int **matrice);

int main() {
    int order;
    printf("Enter the matrice order: ");
    scanf("%d", &order);
    system("clear");
    // int **numbersMatrice = generateMatrice(order);
    int **numbersMatrice = generateEmptyMatrice(order);
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j ++) {
            printf("Enter the %dx%d element: ", i, j);
            scanf("%d", &numbersMatrice[i][j]);
            system("clear");
        }
    }
    printf("\n\n");
    printMatrice(order, numbersMatrice);
    printf("\n\n");
    if (isOrthogonal(order, numbersMatrice)) {
        printf("It is orthogonal!");
    } else {
        printf("It is not orthogonal!");
    }
    freeMatrice(order, numbersMatrice);
    return 0;
}

int **generateEmptyMatrice(int order) {
    int **matrice = malloc(sizeof(int*) * order);
    for (int i = 0; i < order; i++) {
        matrice[i] = malloc(sizeof(int) * order);
    }
    return matrice;
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

int **generateTransposedMatrice(int order, int **matrice) {
    int **transposedMatrice = malloc(sizeof(int*) * order);

    for (int i = 0; i < order; i++) {
        transposedMatrice[i] = malloc(sizeof(int) * order);
    }

    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            transposedMatrice[i][j] = matrice[j][i];
        }
    }
    return transposedMatrice;
}

int  **multiplyMatrices(int order, int **matriceA, int **matriceB) {
    int **productMatrice = malloc(sizeof(int*) * order);
    for (int i = 0; i < order; i++) {
        productMatrice[i] = malloc(sizeof(int) * order);
        for (int j = 0; j < order; j++) {
            productMatrice[i][j] = 0;
            for (int counter = 0; counter < order; counter++) {
                productMatrice[i][j] += matriceA[i][counter] * matriceB[counter][j];
            } 
        }
    } 
    return productMatrice;
}

int isOrthogonal(int order, int **matrice) {
    int **transposed = generateTransposedMatrice(order, matrice);
    int **matriceTransposedProduct = multiplyMatrices(order, matrice, transposed);
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            if (((i == j) && (matriceTransposedProduct[i][j] != 1)) || ((i != j) && (matriceTransposedProduct[i][j] != 0))) {
                freeMatrice(order, transposed);
                freeMatrice(order, matriceTransposedProduct);
                return 0;
            }
        }
    }
    freeMatrice(order, transposed);
    freeMatrice(order, matriceTransposedProduct);
    return 1;
}
