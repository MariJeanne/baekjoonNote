#include <stdio.h>
int main(){
    int t, i, j;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        for(j=0; j<t-i; j++) printf(" ");
        for(j=0; j<i; j++) printf("*");
        printf("\n");
    }
}
