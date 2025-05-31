#include <stdio.h>
#include <stdlib.h>
int main() {
    char text[50];
    int vowels = 0;
    printf(" Enter a text: ");
    scanf("%s", text);
    printf("\n %s", text);

    for (int i = 0; i < 50; i++) {
        switch (text[i]) {
            case 'A':
                vowels++;
                break;
            case 'a':
                vowels++;
                break;
            case 'E':
                vowels++;
                break;
            case 'e':
                vowels++;
                break;
            case 'I':
                vowels++;
                break;
            case 'i':
                vowels++;
                break;
            case 'O':
                vowels++;
                break;
            case 'o':
                vowels++;
                break;
            case 'U':
                vowels++;
                break;
            case 'u':
                vowels++;
                break;
            default:
                break;
        }
    }
    system("clear");
    printf("Number of vowels: %d", vowels);
    return 0;
}