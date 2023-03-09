#include <stdio.h>
#include <stdlib.h>

int main() {
	int matrix[25];
	int moves = 0;
	for (int i = 0; i < 25; i++) {
		scanf("%d", &matrix[i]);
		if (matrix[i] == 1) {
			int col = i % 5;
			int row = i / 5;
			moves += abs(col - 2) + abs(row - 2);
			break;
		}
	}

	printf("%d\n", moves);
	return 0;
}


