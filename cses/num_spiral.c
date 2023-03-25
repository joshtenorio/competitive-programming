#include <stdio.h>
#include <math.h>

int min(int x, int y) {
    if (x < y) return x;
    else return y;
}

int max(int x, int y) {
    if (x > y) return x;
    else return y;
}

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        ll y, x; // row, column
        scanf("%lld %lld", &y, &x);
        
        ll z = max(x,y);
        ll mi = min(x,y);
        ll z2 = z*z, ans;

        if (z % 2 == 0) {
            if (z == y)
                ans = z2 - mi + 1;
            else
                ans = (z-1)*(z-1)+mi;
        }
        else {
            if (z == y)
                ans = (z-1)*(z-1)+mi;
            else
                ans = z2 - mi + 1;
        }
        printf("%lld\n", ans);
        
    }
}
