#include <stdio.h>
#include <string.h>

int main() {
	int x = 0;
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		char statement[150];
		scanf("%s", statement);
		if (statement[0] == 'X') {
			if (statement[1] == '+') x++;
			else x--;
		}
		else {
			if (statement[0] == '+') x++;
			else x--;
		}

	}
	printf("%d\n", x);
	return 0;
}
