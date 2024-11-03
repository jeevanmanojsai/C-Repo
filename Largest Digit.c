#include<stdio.h>
int main (){
    int n,largest=0;
    scanf("%d",&n);
    while(n>0){
        int digit=n%10;
        if(digit>largest){
            largest=digit;
        }
        n/=10;
    }
    printf("%d",largest);
    return 0;
}