#include <stdio.h>

#define ll long long
int main() {
    int n;
    scanf("%d", &n);
    
    ll p = 1;
    for (int i = 0; i < n; i++) {
        p = 2 * p % ((int) 1e9+7);
    }
    printf("%lld\n", p);
} 

