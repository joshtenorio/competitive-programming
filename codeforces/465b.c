#include <stdio.h>

int main() {
	int e;
	int a = 0;
	scanf("%d", &e);
	int unread = 0;
	int in[1000];
	for (int i = 0; i < e; i++) {
		int c;
		scanf("%d", &c);
		in[i] = c;
		unread += c;
	}

	for (int i = 0; i < e; i++) {
		if (in[i]) {
			a++;
			unread--;
			if (in[i+1] == 0 && unread) a++;
		}
	}

	//a = a > 0 ? a-1 : 0;
	printf("%d\n", a);
	return 0;
}
