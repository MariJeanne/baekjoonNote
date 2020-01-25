#include <stdio.h>
int main(){
    int n, i, open;
    char ps[50];
    scanf("%d", &n);
    while(n>0){
        scanf("%s", ps);
        i=0; open=0;
        while(ps[i] && open>=0){
            if(ps[i] == '(') open++;
            else if(ps[i] == ')') open--;
            i++;
        }
        if(open==0 && ps[i]=='\0') printf("YES\n");
        else printf("NO\n");
        n--;
    }
}
