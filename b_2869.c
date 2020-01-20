#include <stdio.h>
int main(){
    int d, a, b, v, cnt;
    scanf("%d %d %d", &a, &b, &v);
    d = a;
    for(cnt=1; d<v; cnt++){
        d -= b;
        d += a;
    }
    printf("%d", cnt);
}
