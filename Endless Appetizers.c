#include<stdio.h>
int main (){
    int x,y,r;
    scanf("%d%d%d",&x,&y,&r);
    int extra=r/30;
    int total=x+extra;
    int max=(total+y-1)/y;
    printf("%d",max);
}