#include<stdio.h>
int main (){
    int x,n,m;
    scanf("%d %d %d",&x,&n,&m);
    int o=x+m;
    if(o>=n){
        printf("YES");
    }else{
        printf("NO");
    }
}