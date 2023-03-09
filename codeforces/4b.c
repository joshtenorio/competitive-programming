#include <stdio.h>

int main() {
	int d, sumTime;
	scanf("%d %d\n", &d, &sumTime);
	
	int minTime[30], maxTime[30];
	int sumMin = 0, sumMax = 0;

	for (int i = 0; i < d; i++) {
		int mi, mx;
		scanf("%d %d\n", &mi, &mx);
		minTime[i] = mi;
		maxTime[i] = mx;
		sumMin += mi;
		sumMax += mx;
	}

	if (sumMin <= sumTime && sumTime <= sumMax) {
		printf("YES\n");
		for (int i = 0; i < d; i++) {
			int t = minTime[i] + sumTime - sumMin < maxTime[i] ? minTime[i] + sumTime - sumMin : maxTime[i];
			printf((i + 1 < d ? "%d " : "%d\n"), t);
			sumTime -= (t - minTime[i]);
		}
	}
	else {
		printf("NO\n");
	}

	return 0;
}
