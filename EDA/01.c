#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ORDER 500

void generateRandomMatrice( int matrice[][ORDER]);
void generateTransposedMatrice( int originalMatrice[][ORDER], int outputMatrice[][ORDER]);
void multiplyMatrices( int matriceA[][ORDER], int matriceB[][ORDER], int outputMatrice[][ORDER]);
int verifyOrtogonality(int matrice[][ORDER]);

int main() {
    system("clear");
    int numbersMatrice[ORDER][ORDER], transposedMatrice[ORDER][ORDER], numbersMultipliedByTransposed[ORDER][ORDER];
    // need to remake it with dynamic memory allocation.
    generateRandomMatrice( numbersMatrice);    
    generateTransposedMatrice( numbersMatrice, transposedMatrice);
    multiplyMatrices( numbersMatrice, transposedMatrice, numbersMultipliedByTransposed);
    if (verifyOrtogonality(numbersMultipliedByTransposed)) {
        printf("\n\n\nOrtogonal Matrice.");
    } else {
        printf("\n\n\nNot ortogonal.");
    }
    printf("\n\n");
    for (int i = 0; i < ORDER; i++) {
        printf("\n\t");
        for (int j = 0; j < ORDER; j++) {
            printf("%d ", numbersMatrice[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < ORDER; i++) {
        printf("\n\t");
        for (int j = 0; j < ORDER; j++) {
            printf("%d ", transposedMatrice[i][j]);
        }
    }
}

void generateRandomMatrice( int matrice[][ORDER]) {
    srand(time(NULL));
    for (int i = 0; i < ORDER; i++) {
        for (int j = 0; j < ORDER; j++) {
            matrice[i][j] = rand() % 30;
        }
        
    }
    return;
}

void generateTransposedMatrice( int originalMatrice[][ORDER], int outputMatrice[][ORDER]) {
    for (int i = 0; i < ORDER; i ++) {
        for (int j = 0; j < ORDER; j ++) {
            outputMatrice[i][j] = originalMatrice[j][i];
        }
    }
    return;
}

void multiplyMatrices( int matriceA[][ORDER], int matriceB[][ORDER], int outputMatrice[][ORDER]) {
    for (int i = 0; i < ORDER; i ++) {
        for (int j = 0; j < ORDER; j ++) {
            int product = 0;
            for (int count = 0; count < ORDER; count ++) {
                product += matriceA[i][count] * matriceB[count][j];
            }
            outputMatrice[i][j] = product;
        }
    }

    return;
} 

int verifyOrtogonality(int matrice[][ORDER]) {
    for (int i = 0; i < ORDER; i++) {
        for (int j = 0; j < ORDER; j++) {
            if (((i == j) && (matrice[i][j] != 1)) || ((i != j) && (matrice[i][j] != 0))) return 0;

        }
        
    }
    return 1;
}