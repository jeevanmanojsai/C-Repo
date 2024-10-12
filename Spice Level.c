#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    if(x>=1 && x<=3){
        printf("MILD");
    }else if (x>=4 && x<=7){
        printf("MEDIUM");
    }else {
        printf("HOT");
    }
}