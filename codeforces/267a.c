#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        int op = 0;        
        while (a && b) {
            if (a > b) {
                int r = a % b;
                op += (a - r)/b;
                a -= (a - r);
            }
            else {
                int r = b % a;
                op += (b - r)/a;
                b -= (b - r);
            }
        }
        printf("%d\n", op);

    }
    return 0;
}
