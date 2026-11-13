#include<stdio.h>
int main() {
    float sp, tp, cpoftotal, cpofone;
    
    printf("Enter Total Selling Price of 15 items: ");
    scanf("%f", &sp);
    printf("Enter Total Profit on 15 items: ");
    scanf("%f", &tp);
    
    cpoftotal = sp - tp;
    cpofone = cpoftotal / 15.0; 
    
    printf("Cost price of one item is %f\n", cpofone);
    return 0;
}