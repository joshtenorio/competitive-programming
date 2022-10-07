#include <stdio.h>

int main(){
    
    char n;
    scanf("%c", &n);
    int max = 1;
    int curr = 1;
    char sym = n;
    while(n != '\n'){
        scanf("%c", &n);
        if(n == sym) curr++;
        else{
            if(curr > max) max = curr;
            sym = n;
            curr = 1;
        }
    } 
     
        printf("%d\n", max);
    return 0;
}
