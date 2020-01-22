#include <stdio.h>
int main(){
    int t, i, index, score, total;
    char ox[80];
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%s", ox);
        for(index=0, total=0, score=0; ox[index]!='\0'; index++){
            if(ox[index] == 'X') score = 0;
            else{
                score += 1;
                total += score;
            }
        }
        printf("%d", total);
    }
}
