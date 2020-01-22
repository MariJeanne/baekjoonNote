#include <stdio.h>
int main(){
    int n, i, temp, cnt=0;
    scanf("%d", &n);
    while(n){
        scanf("%d", &temp);
        for(i=2; i<temp; i++) if(temp%i==0) break;
        if(i==temp) cnt++;
        n--;
    }
    printf("%d", cnt);
}
