#include<stdio.h>
int main (){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    float alice=400.0/x;
    float bob=400.0/y;
    float charlie=400.0/z;
    if (alice>bob && alice>charlie){
        printf("ALICE");
    }else if (bob>alice && bob>charlie){
        printf("BOB");
    }else{
        printf("CHARLIE");
    }
}