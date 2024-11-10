#include<stdio.h>
int main() {
int x,sum=0;
scanf("%d",&x);
while(x>0){
   int ren=x%10;
   sum+=ren;
   x=x/10;
   }printf("%d",sum);
}