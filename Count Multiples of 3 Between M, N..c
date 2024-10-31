#include<stdio.h>
int main (){
    int n,m,i,cunt=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++){
        if (i%3==0){
            cunt++;
        }
    }
    printf("%d",cunt);

}