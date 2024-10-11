#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int diff=x-y;
    int time=0;
    while(time*(time+1)/2<diff){
        time++;
    }
    printf("%d",time);
}