#include <stdio.h>

int main() {
    float a ,b;
    char operator;
    printf("enter a ");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    printf("enter operator");
    scanf("%c",&operator);
    

    switch (operator){

case '+': 
printf("%f+%f=%f",a,b ,a+b);
break;
case '-':
printf("%f-%f=%f",a,b ,a-b);
break;
case '*':
printf("%f*%f=%f",a,b ,a*b);
break;
case '/':
printf("%f/%f=%f",a,b ,a/b);
break;

default : ("invalid input! entered ");
    }
    
    return 0;
}