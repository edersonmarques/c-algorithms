#include <stdio.h>

int main() {
    // int *pnum;
    // char *pch;
    // float *pfnum;

    int x = 10;
    int *ptr;
    ptr = &x;

    int n;
    int *ptr2 = &n;

    *ptr2 = 2;


    printf("It is %d %d %d", *ptr2, n, *ptr);

    int num, *pnum;
    pnum = &num;
    printf("\n Enter the number : ");
    scanf("%d", &num);
    printf("\n The number that was entered is : %d", *pnum);
    return 0;
}