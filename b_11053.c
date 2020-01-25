#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, j, max=0;
    int *num, *cnt;
    scanf("%d", &n);
    num = (int*)malloc(sizeof(int)*n);
    cnt = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) scanf("%d", num+i);
    
    for(i=0; i<n; i++){
        cnt[i] = 1;
        for(j=0; j<i; j++) 
            if(num[j]<num[i]) {
                num[j] = num[i];
                cnt[j]++;
            }
    }
    for(i=0; i<n; i++) if(cnt[i] > max) max = cnt[i];
    printf("%d", max);
}
