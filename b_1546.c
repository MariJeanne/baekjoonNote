#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, temp;
    float *scores;
    float n, max = 0, sum = 0;
    scanf("%f", &n);
    scores = (float*)malloc(sizeof(int)*(int)n);
    for(i=0; i<n; i++) {
        scanf("%f", &scores[i]);
        if(scores[i] > max) max = scores[i];
    }
    for(i=0; i<n; i++) sum += (scores[i]/max)*100;
    sum = sum / n;
    temp = sum*100;
    printf("%.2f", sum);
}
