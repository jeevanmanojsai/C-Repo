#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int ef=100*(100-x);
    int ef2=200*(100-y);
    if(ef<ef2){
        printf("FIRST");
    }else if(ef>ef2){
        printf("SECOND");
    }else{
        printf("BOTH");
    }
}