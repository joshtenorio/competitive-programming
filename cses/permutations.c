#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n == 1){
        printf("1");
    }
    else if(n == 4) printf("2 4 1 3");
    else if(n > 3 ){
            for(int i = n; i > 0; i -= 2) printf("%d ", i);
            for(int i = n-1; i > 0; i -= 2) printf("%d ", i);
    }
    else{
        printf("NO SOLUTION");
    }
}
