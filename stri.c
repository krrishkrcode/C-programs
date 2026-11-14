#include <stdio.h>
#include <string.h>

char s[100005];

int main() {
    scanf("%s", s);
    int n = strlen(s), i, j, k;
    
    for (i = 0; i < n; i++) 
        for (j = i + 1; j < n; j++)
            if (s[i] > s[j]) { char t = s[i]; s[i] = s[j]; s[j] = t; }
            
    while (1) {
        printf("%s\n", s);
        
        for (i = n - 2; i >= 0 && s[i] >= s[i + 1]; i--);
        if (i < 0) break;
        
        for (j = n - 1; s[j] <= s[i]; j--);
        char t = s[i]; s[i] = s[j]; s[j] = t;
        
        for (j = i + 1, k = n - 1; j < k; j++, k--) { 
            t = s[j]; s[j] = s[k]; s[k] = t; 
        }
    }
    return 0;
}