#include <stdio.h>

int abs(int x) {
    if (x >= 0) return x;
    else return x * -1;
}

int getSection(int col) {
    if (col % 2 == 0) {
        return 0;
    }
    else return col*col;
}
int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int y, x; // row, column
        scanf("%d %d", &y, &x);


        if (x == y){ // row = column
            printf("%d\n", x*x - x+1);
        }
        else if (x > y) {
            if (x % 2 == 1) {
                int base = getSection(x);
                printf("%d\n", base - y + 1);
            }
            else {
                int base = getSection(x-1) + 1;
                printf("%d\n", base + y -1);
            }
        }
        else { 
            if (y % 2 == 1) {
                int base = getSection(y);
                printf("%d\n", base + x - 1);
            }
            else {
                int base = getSection(y-1) + 1;
                printf("%d\n", base - x +1);
            }
        }
    }
}
