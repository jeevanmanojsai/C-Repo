#include<stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int n=a+1;n<b;n++){
        int s=n*n;
        int c=s*n;
        printf("%d %d %d\n",n,s,c);

    }
}