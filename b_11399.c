#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t) (t)=(x); (x)=(y); (y)=(t);
int main(){
    int t, i, j, temp, max, sum=0;
    int *pi;
    scanf("%d", &t);
    pi = (int*)malloc(sizeof(int)*t);
    for(i=0; i<t; i++) scanf("%d", pi+i);
    for(i=0; i<t; i++){
        max = i;
        for(j=i+1; j<t; j++) if(pi[j] > pi[max]) max = j;
        SWAP(pi[i], pi[max], temp);
    }
    for(i=0; i<t; i++) sum += (pi[i]*(i+1));
    printf("\n%d", sum);
}
