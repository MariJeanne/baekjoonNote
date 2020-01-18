#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    while(fscanf(stdin, "%d %d", &a, &b) != EOF){
        printf("%d\n", a+b);
    }
}
