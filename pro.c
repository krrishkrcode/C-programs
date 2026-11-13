#include<stdio.h>

int main () {
    int a,b , c, avg;

printf("enter a");
scanf("%d",&a);
printf("enter b");

scanf("%d",&b);
printf("enter c");
scanf("%d",&c);



if (a>b && a>c)

{
    printf("a is greater");
}
else if (b>c)

{
    printf("b is greater");
}
return 0;

}