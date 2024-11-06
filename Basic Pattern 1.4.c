#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    for(char i=1;i<=x;i++){
        for(char ch='A';ch<'A'+x;ch++ ){
            printf("%c ",ch);
        }
        printf("\n");
    }
}