#include <stdio.h>
#include <stdlib.h>

int main() {
    int marks[10], num, position;
    system("clear");
    printf("Enter a number: ");
    scanf("%d", &num);
    system("clear");
    printf("Enter the position: ");
    scanf("%d", &position);
    marks[position] = num;
    system("clear");
    printf("Number: %d\nPosition: %d\n\n", marks[position], position);
    return 0;
}