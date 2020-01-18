#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000
#define MAX_NUM 10000
#define SWAP(x,y,t) (t)=(x); (x)=(y); (y)=(t);

int main(){
    int t, i, temp, max=0;
    int *IN, *OUT, *CNT;
    scanf("%d", &t);
    IN = (int*)malloc(sizeof(int)*t);
    OUT = (int*)malloc(sizeof(int)*t);
    for(i=0; i<t; i++) {
        scanf("%d", &IN[i]);
        if(IN[i] > max) max = IN[i];
    }
    max++;
    CNT = (int*)malloc(sizeof(int)*max);
    for(i=0; i<t; i++) CNT[IN[i]] += 1;
    for(i=1; i<max; i++) CNT[i] = CNT[i-1] + CNT[i];
    for(i=1; i<max; i++) printf("<%d> ", CNT[i]);

    for(i=t-1; i>=0; i--){
        OUT[CNT[IN[i]]] = IN[i];
        CNT[IN[i]]--;
    }
	for(i=1; i<=t; i++) printf("%d ", OUT[i]);
}
