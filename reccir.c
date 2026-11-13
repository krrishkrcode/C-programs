#include<stdio.h>
int main() {
    float l, b, r;
    
    printf("Enter length for rectangle: ");
    scanf("%f", &l);
    printf("Enter Breadth for rectangle:");
    scanf("%f",&b);
    printf("Rectangle Area = %f, Perimeter = %f\n", l*b, 2*(l+b));
    
    printf("Enter radius for circle: ");
    scanf("%f", &r);
    printf("Circle Area = %f, Circumference = %f\n", 3.14*r*r, 2*3.14*r);
    
    return 0;
}