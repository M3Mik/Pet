#include<stdio.h>
int main(){
    int score[5] = {0,0,0,0,0};
    for (int i=0;i<5;i++){
        for (int j=0;j<4;j++){
            int n;
            scanf("%d",&n);
            score[i] += n;
        }
    }
    int max = score[0];
    for (int i=0;i<5;i++){
        if (max<score[i]){
            max = score[i];
        }
    }
    for (int i=0;i<5;i++){
        if (max==score[i]){
            printf("%d %d",i+1,max);
            break;
        }
    }
    return 0;