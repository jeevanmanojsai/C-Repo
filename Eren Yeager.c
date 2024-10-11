#include<stdio.h>
int main (){
    int a,b,n;
    scanf("%d %d %d",&n,&a,&b);
    int tot=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            tot+=a;
        }else{
            tot+=b;
        }
    }
    printf("%d",tot);
}