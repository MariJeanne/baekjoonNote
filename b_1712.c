#include <stdio.h>
int main(){
    int a, b, c, i, bef;
    scanf("%d %d %d", &a, &b, &c);
    
    if(b>c || a==0) bef = 0;
    else if(b==c) bef = -1;
    else{ 
        for(i=1;;i++) if(c*i>(a+b*i)) break;
        bef = i;
    }
    printf("%d", i);
    return 0;
}
