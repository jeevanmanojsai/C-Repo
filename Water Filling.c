#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int empty =(a==0)+(b==0)+(c==0);
    if (empty>=2){
        printf("Water filling time");

    }else{
        printf("Not now");
    }

}