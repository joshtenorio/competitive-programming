#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n*(n+1)/2 % 2 == 0) {
       printf("YES\n"); 
    }
    else
        printf("NO\n");
    return 0;
}
