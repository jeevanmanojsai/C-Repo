#include<stdio.h>
int main (){
    int k;
    char ch;
    scanf("%c %d",&ch,&k);
    char result=(ch-'a'+k)%26+'a';
    printf("%c",result);
}