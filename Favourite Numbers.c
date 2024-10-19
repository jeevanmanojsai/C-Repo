#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    if(x%2==0  && x%7==0){
        printf("Alice");
    }else if (x%2!=0 && x%9==0){
        printf("Bob");
    }else {
        printf("Charlie");
    }
}