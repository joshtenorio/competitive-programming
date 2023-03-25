#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int r = 0;
    for (int i = 0; i < n; i++) {
        char s;
        scanf("%c", &s);
        if (s == '#') {
           r++;
           if (r >= k) {
               printf("NO\n");
               return 0;
           }
        }
        else {
           r = 0;
        } 
    }
    printf("YES\n");
    return 0;
}
