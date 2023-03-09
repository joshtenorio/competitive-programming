#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int a,b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) printf("YES\n");
		else if (a == 0 || b == 0) printf("NO\n");
		else if (a / 2 == b || b / 2 == a) {
			printf("YES\n");
		}
		else if (a % 3 == 0 && b % 3 == 0) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}
