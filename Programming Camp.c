#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int dis=x*15;
    int tot=2*y;
    if (dis>=tot){
        printf("YES");
    }else{
        printf("NO");
    }
}