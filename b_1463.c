#include <stdio.h>
#include <stdlib.h>
int cal(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", cal(n));
}

int cal(int num){
    int cals[3];
    int i, min=num;
    
    if(num==1) return 0;
    else{
        cals[0] = 1 + cal(num-1);
        if(num%2==0) cals[1] = 1 + cal(num/2);
        else cals[1] = num;
        if(num%3==0) cals[2] = 1 + cal(num/3);
        else cals[2] = num;
        
        for(i=0; i<3; i++) if(cals[i]<min) min = cals[i];
        return min;
    }
}
