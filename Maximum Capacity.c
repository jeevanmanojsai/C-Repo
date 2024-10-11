#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int n=x*y;
    if(x<=8 && n<=500){
        printf("YES");
    }else{
        printf("NO");
    }
}