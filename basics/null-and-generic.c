#include <stdio.h>
int main() {
    int *ptr = NULL;

    if (ptr == NULL) {
        printf("null");
    }

    int x=10;
    char ch = 'A';
    void *gp ;
    gp = &x;
    printf("\n Generic pointer points to the integer value = %d", *(int*)gp);
    gp = &ch;
    printf("Generic pointer now points to the character = %c", *(char*)gp);
    return 0;
}