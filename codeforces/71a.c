#include <stdio.h>
#include <string.h>

int main() {
	int tests = 0;
	scanf("%d\n", &tests);

	for (int i = 0; i < tests; i++) {
		char word[100];
		scanf("%s\n", word);
		if (strlen(word) > 10) {
			printf("%c%ld%c\n", word[0], strlen(word)-2, word[strlen(word)-1]);
		}
		else printf("%s\n", word);
	}

	return 0;
}
