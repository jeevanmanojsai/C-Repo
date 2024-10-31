#include<stdio.h>
int main(){
    int n,org,rev=0;
    scanf("%d",&n);
    org=n;
    while(n>0){
        int dig=n%10;
        rev=rev*10+dig;
        n/=10;

    }
    
    if (org==rev){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}