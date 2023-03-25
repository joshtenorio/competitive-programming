#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        ll a1 = k*k; // ways to place first knight
                     // a1 - 1 ways to place second knight
        ll a2 = a1*(a1-1)/2; // a2: total possibilities
       /*
        * from https://codeforces.com/blog/entry/78943:
        If two knight attack each other then they will be in 2*3 rectangle or 3*2 rectangle.
        So the number of ways of placing them is (n-1)*(n-2)+(n-2)*(n-1).
        Also in each rectangle no ways of placing the knight is 2.
        So total ways of placing knight so that they attack each other will be 2*2*(n-1)*(n-2).
        So the number of ways such that knight do not attack each other will be n*n*(n*n-1)/2 — 4*(n-1)*(n-2)
        */ 
        if (k > 2) {
            a2 -= 4*(k-1)*(k-2);
        }
        printf("%lld\n", a2);
    }
    return 0;
}
