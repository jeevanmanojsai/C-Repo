#include<stdio.h>
#include<stdlib.h>
int main (){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i = 0; i < x; i++){ 
        if(i % 2 == 0) { 
            even += arr[i];
             } else { 
                odd += arr[i];
     }
     
}
    int abs_diff = abs(even -odd);

     printf("%d\n", abs_diff);

}