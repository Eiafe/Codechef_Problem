#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N<3){
        printf("GOLD");
    }
    else if(N<6){
        printf("SILVER");
    }
    else{
        printf("BRONZE");
    }

}
