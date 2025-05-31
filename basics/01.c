#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[10];
    for (int counter = 0; counter < 10; counter ++) {
        printf("\n Enter a number : ");
        scanf("%d", &n[counter]);
    }
    system("clear");
    printf(" %d, %d, %d, \n %d, %d, %d, \n %d, %d, %d, \n %d", n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7], n[8], n[9]);
    return 0;
}