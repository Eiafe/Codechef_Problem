#include<stdio.h>
int main(){
    int R1,R2,D1,D2;
    scanf("%d %d",&R1,&R2);
    scanf("%d %d",&D1,&D2);
    int one=(R1+D1);
    int Dominater=one;
    int tow=(R2+D2);
    int Everule=tow;
    if(Dominater<Everule){
        printf("Everule");
    }
    else{
        printf("Dominater");
    }


}
