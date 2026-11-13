#include<stdio.h>
int main() {
    int n, first, last, sum;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    
    last = n % 10;
    first = n / 1000; 
    sum = first + last;
    
    printf("Sum of first and last digit is %d\n", sum);
    return 0;
}