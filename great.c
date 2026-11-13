#include<stdio.h>

 int main() { 

    int a,b,c;
    printf("enter three numbers");
    scanf("%d,%d,%d",&a,&b,&c);

    if (a>b)
    {
        printf("a is greater");

    }
    else if (a<b)
    {
        printf("b is greater");
    }  
    else{
        printf("both are equal");

    }

 return 0;

 }