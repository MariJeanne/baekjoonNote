#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    while(1){
        fscanf(stdin, "%d %d", &a, &b);
        if(a == EOF) break;
        printf("%d\n", a+b);
    }
}
