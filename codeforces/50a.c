#include <stdio.h>

int main() {
	int m, n;
	scanf("%d %d\n", &m, &n);
	
	int area = m*n;
	if (area % 2 == 0) printf("%d\n", area/2);
	else {
		printf("%d\n", (area - 1)/2);
	}
	return 0;
}
