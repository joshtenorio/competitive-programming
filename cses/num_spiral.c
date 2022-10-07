#include <stdio.h>


int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int y, x; // row, column
        scanf("%d %d", &y, &x);
        if(x == 1 && y == 1) printf("1\n");
        else if(x < y){ // column < row
            printf("%d\n", y*y - (x-1));
        }
        else if(x > y){ // column > row
            printf("%d\n", x*x - (y-1));
        }
        else if(x == y){ // row = column
            printf("%d\n", x*x - x+1);
        }
    }
}
