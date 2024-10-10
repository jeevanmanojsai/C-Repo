#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    if(x<=100 && x>=999){
        printf("valid 3 digit number");
        return 1;
    }
    int first_pair=x/10;
    int second_pair=x%100;
    int pair_sum=first_pair+second_pair;
    printf("%d",pair_sum); 
}