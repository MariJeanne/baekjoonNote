#include <stdio.h>
int main(){
    int a, b, c, i, bef;
    scanf("%d %d %d", &a, &b, &c);
    
    if(b>=c) bef = -1;
    else {
        bef = a / (c-b) + 1;
        if(bef<0) bef = -1;
    }
    
    printf("%d", bef);
    return 0;
}
