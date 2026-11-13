#include<stdio.h>

int main() {
    float km,m,cm,inch,feet;
    printf("enter disance in kilometer");
    scanf("%f",&km);

    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    feet=inch/12;

    printf("meters:%f\n",m);
    printf("centimeters:%f\n",cm);
    printf("inches:%f\n",inch);
    printf("feet:%f\n",feet);
    return 0;

}