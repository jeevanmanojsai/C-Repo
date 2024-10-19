#include<stdio.h>
int main (){
    int n,m;
    scanf("%d %d",&n,&m);
    double o=n*0.90;
    if(o<m){
        printf("ONLINE");
        
    }else if (o>m){
        printf("DINING");

    }else{
        printf("EITHER");
    }
}