#include<stdio.h>
int main (){
    int m,n;
    scanf("%d %d",&m,&n);
    int max=(m>n)?m:n;
    while(1){
        if(max%m==0 && max%n==0){
            printf("%d",max);
            break;
        }
        max++;
    }
}