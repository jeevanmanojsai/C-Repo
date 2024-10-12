#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    if (x<1 || x>=12 ||y<=x || y>=12){
        return 1;
    }
    int hours=y-x;
    printf("%d",hours);
}