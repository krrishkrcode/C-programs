#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    

    if (a==b && b==c)
    {
        printf("all three numbers are equal");
    }
    else if (a==b && a>c)
    {
        printf("%d and %d are equal and largest",a,b);
    }
    else if (a==c && a>b)
    {
        printf("%d and %d are equal and largest",a,c);

    }
    else if (b==c && b>a)
{
    printf("%d and %d are equal and largest", b, c);
}
    else if (a>b && a>c)
    {
        printf("%d is the largest",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the largest",b);

    }
    else
    {
        printf("%d is the largest",c);
    }
    
    
    
    
    
    return 0;
}