#include <stdio.h>

int min (int a, int b) {
    return a < b ? a : b;
}

int max (int a, int b) {
    return a > b ? a : b;
}

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int a,b;
		scanf("%d %d", &a, &b);
        int s = a + b, mi = min(a, b), ma = max(a, b);

        if (!s) {
            printf("YES\n");
            continue;
        }
        
        if (!a || !b || ((ma-mi) > mi) || (a == b && a % 3)) {
            printf("NO\n");
            continue;
        }

       if (s % 3 == 0) {
          printf("YES\n");
       }
       else {
          printf("NO\n");
       } 
        
    }
	return 0;
}
