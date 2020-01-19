#include <stdio.h>
int main(){
    int i, max=0;
    int n[9];
    for(i=0; i<9; i++) {
        scanf("%d", &n[i]);
        if(n[i] > n[max]) max = i;
    }
    printf("%d\n%d", n[max], max+1);
}
