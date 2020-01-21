#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, i, n=1;
    int *nums;
    nums = (int*)malloc(sizeof(int)*10);
    for(i=0; i<3; i++){
        scanf("%d", &a);
        n *= a;
    }
    for(; n>0; n /= 10) nums[n%10] += 1;
    for(i=0; i<10; i++) printf("%d\n", nums[i]);
}
