#include<stdio.h>
int main() {
    int s1, s2, s3, s4, s5, aggregate;
    float percentage;
    
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    
    aggregate = s1 + s2 + s3 + s4 + s5;
    

    percentage = aggregate / 5.0; 
    
    printf("Aggregate marks = %d\n", aggregate);
    printf("Percentage = %f\n", percentage);
    
    return 0;
}