#include <stdio.h>
#include <string.h>

#define CURR_M (sound[i]=='m'||sound[i]=='M')
#define CURR_E (sound[i]=='e'||sound[i]=='E')
#define CURR_O (sound[i]=='o'||sound[i]=='O')
#define CURR_W (sound[i]=='w'||sound[i]=='W')

#define NEXT_M (sound[i+1]=='m'||sound[i+1]=='M')
#define NEXT_E (sound[i+1]=='e'||sound[i+1]=='E')
#define NEXT_O (sound[i+1]=='o'||sound[i+1]=='O')
#define NEXT_W (sound[i+1]=='w'||sound[i+1]=='W')

int main() {
	int t;
	scanf("%d", &t);

	for (int j = 0; j < t; j++) {
		int n;
		scanf("%d", &n);
		char sound[50];
		scanf("%s", sound);
		int status = 0;
		
		if (n < 4) {
			printf("NO\n");
			continue;
		}

		if (sound[0] != 'm' && sound[0] != 'M') status++;
		if (sound[n-1] != 'w' && sound[n-1] != 'W') status++;

		for (int i = 0; i < n - 1; i++) {
			if (CURR_M && !(NEXT_M || NEXT_E)) status++;
			else if (CURR_E && !(NEXT_E || NEXT_O)) status++;
			else if (CURR_O && !(NEXT_O || NEXT_W)) status++;
			else if (CURR_W && !NEXT_W) status++;

			if ( !(CURR_M || CURR_E || CURR_O || CURR_W) ) status++;
		}

		if (status) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
