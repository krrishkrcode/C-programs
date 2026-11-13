#include <stdio.h>

int main() {
    char ch;
    
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    

    if (ch >= 'a' && ch <= 'z')
      {
        printf("'%c' is lower case", ch);
    } 
    else if (ch >= 'A' && ch <= 'Z')
     {
        printf("'%c' is upper case", ch);
    }
    else {
        printf("error");
    }
    
    return 0;
}