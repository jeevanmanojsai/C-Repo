#include<stdio.h>
int main (){
    char ch;
    int x;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
    x=ch-'a'+1;}
    else if (ch>='A' && ch<='Z'){
        x=ch-'A'+1;
    }
    printf("%d",x);

}