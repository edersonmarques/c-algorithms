#include <stdio.h>
#include <stdlib.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    system("clear");
    if (isEven(number)) {
        printf("The number %d is even!\n\n\n", number);
    } else {
        printf("The number %d is odd.\n\n\n", number);

    }
    return 0;
}