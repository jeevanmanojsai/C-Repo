#   include<stdio.h>
int main (){
    int n,sum=0,rem;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        rem=a[i];
        sum=sum+rem;

    }printf("%d",sum);
}