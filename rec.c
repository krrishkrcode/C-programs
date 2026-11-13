#include<stdio.h>
int main() {
    float l, b, area, peri;
    printf("Enter length of rectangle: ");
    scanf("%f",&l);
  printf("enter Breadth of rectangle:");
  scanf("%f",&b);

    area = l * b;
    peri = 2 * (l + b);
    printf("Area = %f and Perimeter = %f\n", area, peri);

    return 0;
}