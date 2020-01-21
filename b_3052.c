#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, i, cnt=0;
    int *nums;
    nums = (int*)malloc(sizeof(int)*42);
    for(i=0; i<10; i++){
        scanf("%d", &a);
        nums[a%42] += 1;
    }
    for(i=0; i<42; i++) if(nums[i]>0) cnt++;
    printf("%d", cnt);
}
