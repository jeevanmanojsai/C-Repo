#include<stdio.h>
int main (){
    char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("Alphabet");
    }else if (ch>='0' && ch<='9'){
        printf("Digit");
    }else if (ch==' '){
        printf("Space");
    }else {
        printf("Special Character");
    }
}