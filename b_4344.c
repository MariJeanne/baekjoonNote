#include <stdio.h>
#include <stdlib.h>
int main(){
    int t, i, n, j;
    int *score;
    float average, cnt;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        score = (int*)malloc(sizeof(int)*n);
        average = 0; cnt = 0;
        for(j=0; j<n; j++) {
            scanf("%d", score+j);
            average += score[j];
        }
        average /= n;
        for(j=0; j<n; j++) if(score[j] > average) cnt++;
        average = (cnt / n) * 100;
        printf("%.3f\%\n", average);
    }
}
