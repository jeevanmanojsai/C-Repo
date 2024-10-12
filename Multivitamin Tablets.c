#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int tablets=3*x;
    if(y>=tablets){
        printf("YES");
    }else{
        printf("NO");
    }

}