#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int tot;
    if(y<=x){
        tot=y;
    }else{
        tot=x+2*(y-x);
    }
    printf("%d",tot);
}