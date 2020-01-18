#include <stdio.h>
#include <stdlib.h>
int main(){
    int m, n, i, j, k, sum, maxsum=0;
    int *cards;
    scanf("%d %d", &n, &m);
    cards = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) scanf("%d", cards + i);
    for(i=0; i < n-2 ; i++)
        for(j=i+1; j < n-1; j++)
            for(k=j+1; k < n; k++){
                sum = cards[i] + cards[j] + cards[k];
                if(sum <= m && sum > maxsum) maxsum = sum;
            }
    printf("%d", maxsum);
}
