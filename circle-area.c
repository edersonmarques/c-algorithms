#include <stdio.h>

int main() {
    const float pi = 3.14;
    float radius;
    printf("Type the circle radius: ");
    scanf("%f", &radius);
    float area = radius * radius * pi;
    printf("The area is %f", area);
    return 0;
}