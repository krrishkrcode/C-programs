#include<stdio.h>
int main() {
    float r, area, cir;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    cir = 2 * 3.14 * r;
    printf("Area = %f and Circumference = %f\n", area, cir);
    return 0;
}