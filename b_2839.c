#include <stdio.h>
int main(){
    int n, i, cnt=0;
    scanf("%d", &n);
    for(cnt=0; n>0; cnt++){
        if(n%5==0) n -= 5;
        else n -= 3;
    }
    if(n<0) cnt = -1;
    printf("%d", cnt);
}
