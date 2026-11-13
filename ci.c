#include<stdio.h>
#include<math.h>
int main() {
    float p,r,t,ci;
    printf("enter principal");
    scanf("%f",&p);
    printf("enter rate");
    scanf("%f",&r);
    printf("enter time");
    scanf("%f",&t);

    ci=p*pow((1+r/100),t)-p;
    printf("compound intrest is %f\n",ci);
return 0;

}