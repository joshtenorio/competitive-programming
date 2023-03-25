#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char a[100];
        char b[100];
        int n;
        scanf("%d", &n);
        scanf("%s", a);
        scanf("%s", b);
        int st = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]);
            else if (a[i] == 'B' && b[i] == 'G');
            else if (a[i] == 'G' && b[i] == 'B');
            else {
                st = 1;
                printf("NO\n");
                break;
            }
        }
        if (!st) printf("YES\n");
    }
    return 0;
}
