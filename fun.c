// practicing functionns 
#include <stdio.h>
int multiply( int a , int b);
int multiply (int a , int b) {
    return a*b;
}
int main() {
    int a,b ,multiple;
    printf("enter two numbers :");
    scanf("%d %d", &a,&b);
    multiple = multiply(a,b);
    printf("answer is : %d\n" , multiple);
    return 0;
}