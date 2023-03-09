#include <stdio.h>

int main() {
	int n, k;
	scanf("%d %d\n", &n, &k);

	int num = 0;
	int kth = 0;

	for (int i = 0; i < n; i++) {
		int p;
		scanf("%d", &p);
		if (i + 1 < k && p > 0) {
			num++;
		}
		else if (i + 1 == k) {
			kth = p;
			if (p > 0) num++;
		}
		else if (p >= kth && p > 0) {
			num++;
		}
	}

	printf("%d\n", num);
	return 0;
}
