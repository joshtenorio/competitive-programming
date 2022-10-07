#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int prev = 0;
    long steps = 0;
    for(int i = 0; i < n; i++){
        int curr;
        scanf("%d", &curr);
        if(prev && curr - prev < 0){
            steps += prev - curr;
            curr = prev;
        }
        prev = curr;
    }
    printf("%ld", steps);
}
