#include<stdio.h>

int main() {
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);

     if (b!=0)
    {
        printf("quotient is %d\n",a/b);
       printf("remainder is %d\n",a%b);
    }
    else
    {
        printf("worng operation");
    }
    return 0;




}