#include <stdio.h>

int main(){
    long n;
    scanf("%ld", &n);

    printf("%ld ", n);
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n *= 3;
            n++;
        }
        printf("%ld ", n);
    }
    return 0;
}

