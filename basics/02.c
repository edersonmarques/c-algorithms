#include <stdio.h>
#include <stdlib.h>

int isEven (int number) {
    return number % 2 == 0;
}

int main() {
    int sum = 0;
    system("clear");
    printf("\nEven number from 1 to 200 : ");
    for (int number = 1; number <= 200; number++) {
        if (isEven(number)) {
            sum += number;
            printf("%d ", number);
        }
    }

    printf("\n\n Their sum : %d", sum);
    return 0;
}