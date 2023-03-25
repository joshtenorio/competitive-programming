#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    char s[10];
    char a = 0;
    while(t--) {
        int n;
        scanf("%d", &n);
        if (n != 5) {
            scanf("%s", s);
            printf("NO\n");
            continue;
        }
        else {
            a = 0;
            scanf("%s", s);
            for (int i = 0; i < n; i++) {
                int st = 0;
                switch (s[i]) {
                    case 'T':
                        a |= 0b1;
                        break;
                    case 'i':
                        a |= 0b10;
                        break;
                    case 'm':
                        a |= 0b100;
                        break;
                    case 'u':
                        a |= 0b1000;
                        break;
                    case 'r':
                        a |= 0b10000;
                        break;
                    default:
                        st = 1;
                        break;
                }
                if (st) break;
            }
            if (a == 0b11111) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
