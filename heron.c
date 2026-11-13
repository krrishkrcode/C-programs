#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, s, area;
    
    printf("Enter the 3 sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
     
    s = (a + b + c) / 2.0;
    

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Area of Triangle is %f\n", area);
    
    return 0;
}