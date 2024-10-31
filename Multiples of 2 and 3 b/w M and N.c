#include<stdio.h>
int main (){
    int m,n,count=0;
    scanf("%d %d",&m,&n);
    if(m>n){
        int temp=m;
        m=n;
        n=temp;
    }
    for(int i=m;i<=n;i++){
        if(i%6==0){
            count++;
        }
    }
    printf("%d",count);
}