#include<stdio.h>
int main (){
    int n,m;
    scanf("%d %d",&n,&m);
    int x=6*(6*m);
    if(x>=n){
        printf("YES");
    }else{
        printf("NO");
    }
}