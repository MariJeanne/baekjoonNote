#include <stdio.h>
int newNumber(int num){
    int n1, n2, new;
    n1 = num%10;
    n2 = (num%10 + (num/10)%10)%10;
    return n1*10 + n2;
}
int main(){
    int n, nn, n1, n2, cnt;
    scanf("%d", &n);
    nn = newNumber(n);
    for(cnt=1; nn != n; cnt++) nn = newNumber(nn);
    printf("%d", cnt);
}
