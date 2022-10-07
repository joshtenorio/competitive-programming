#include <stdio.h>

int getSumTo(int n);

int main(){
    int n;
    scanf("%d", &n);
    int sum = getSumTo(n);
    int num;
    for(int i = 0; i < n-1; i++){
        scanf("%d", &num);
        sum -= num;
    }
    printf("%d", sum);
}

int getSumTo(int n){
    int sum = 0;
    for(int i = 1; i <=n; i++) sum += i;

    return sum;
}
