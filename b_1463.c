#include <stdio.h>
int main(){
    int n, cnt=0;
    scanf("%d", &n);
    while(n!=1){
        if(n%3==0) n/=3;
        else if(n%2==0) n/=2;
        else n-=1;
        cnt++;
    }
    printf("%d", cnt);
}
