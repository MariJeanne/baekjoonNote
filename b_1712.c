#include <stdio.h>
int main(){
    int a, b, c, i;
    scanf("%d %d %d", &a, &b, &c);
    for(i=1; ; i++) if(c*i > (a + b*i) ) break;
    printf("%d", i);
}
