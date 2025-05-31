#include <stdio.h>

int main() {
    int num = 10;
    int *pnum = &num;
    int **ppnum = &pnum;

    printf("%d", **ppnum);
    return 0;
}