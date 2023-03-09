#include <stdio.h>

int main() {
	int tests;
	scanf("%d\n", &tests);
	for (int i = 0; i < tests; i++) {
		int xa, ya, xb, yb, xc, yc;
		int x = 0, y = 0;
		scanf("%d %d", &xa, &ya);
		scanf("%d %d", &xb, &yb);
		scanf("%d %d", &xc, &yc);
		if ( xa == xb || xa == xc || xb == xc) x = 1;
		if ( ya == yb || ya == yc || yb == yc) y = 1;

		if (x + y == 2) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
