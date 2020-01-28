#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, k, i, cnt=0;
    int *coin;
    scanf("%d %d", &n, &k);
    coin = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) scanf("%d", coin+i);
    for(i=0; i<n; i++) if(coin[i]>=k) break;
    i--; //startPos
    while(k>0){
        cnt += k/coin[i];
        k = k % coin[i--];
    }
    printf("%d", cnt);
}
