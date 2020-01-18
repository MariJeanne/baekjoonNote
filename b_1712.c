#include <stdio.h>
int main(){
    int a, b, c, i, bef;
    scanf("%d %d %d", &a, &b, &c);
    
    if(b==c) bef = -1;
    else{ 
        for(i=0;;i++) if(c*i>(a+b*i)) break;
        bef = i;
    }
    printf("%d", bef);
    return 0;
}
