#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 1) {
        int divided = 0;
        for (int counter = 2; counter <= number; counter ++) {
            if ((number % counter == 0) && (divided == 0)) {
                divided = 1;
            } else if (divided == 1) {
                printf("\nNão é primo.");
                return 0;
            }
        }
    }
    printf("\nÉ primo!");
    return 0;
}