#include <stdio.h>
int main(){
    long int a, b, c;
    int i;
    scanf("%ld %ld %ld", &a, &b, &c);
    if(b==c ||(a==0&&b>=c)){
        printf("-1");
        return 0;
    }
    for(i=1;;i++) if(c*i>(a+b*i)) break;
    printf("%d", i);
    return 0;
}
