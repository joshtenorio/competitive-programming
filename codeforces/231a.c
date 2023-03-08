#include <stdio.h>

int main() {
	int problems = 0;
	scanf("%d\n", &problems);
	int solves = 0;
	
	for (int i = 0; i < problems; i++) {
		int a, b, c;
		scanf("%d %d %d\n", &a, &b, &c);
		if (a + b + c >= 2) solves++;	
	}

	printf("%d\n", solves);
	return 0;
}
