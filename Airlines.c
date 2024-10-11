#include<stdio.h>
int main (){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int capacity=10*x;
    int tickets=(y<capacity)?y:capacity;
    int n=tickets*z;
    printf("%d",n);
}