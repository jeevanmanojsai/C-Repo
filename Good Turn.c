#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int n=x+y;
    if(n>6){
        printf("YES");
    }else{
        printf("NO");
    }
}