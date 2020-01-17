#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000001
#define SWAP(x,y,t) (t)=(x); (x)=(y); (y)=(t);

int main(){
    int t, i, max=0, temp, n;
    int IN[MAX_SIZE], OUT[MAX_SIZE];
    int *CNT;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &IN[i]);
        if(IN[i]>max) max = IN[i];
    }
    max++;
    CNT = (int*)malloc(sizeof(int)*max);
    for(i=0; i<max; i++) CNT[i] = 0;
    for(i=0; i<t; i++) CNT[IN[i]] += 1;
    for(i=1; i<max; i++) CNT[i] = CNT[i-1] + CNT[i];
    
    for(i=t; i>=0; i--){
        n = IN[i];
		SWAP(IN[CNT[n]], IN[i], temp);
		CNT[n]--;
	}
	for(i=1; i<=t; i++) printf("%d ", IN[i]);
}
