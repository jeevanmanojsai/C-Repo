#include<stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
        int c=a+b;
        int o=a*b;
        int d=c-o;
        if(d<0){
            d=-d;
        }
        printf("%d\n",d);
}