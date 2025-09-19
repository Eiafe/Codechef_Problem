#include<stdio.h>
int main(){
    int A,B,X,Y;
    scanf("%d %d",&A,&B);
    scanf("%d %d",&X,&Y);
    if((A*2+B)>(X*2+Y)){
        printf("Messi");
    }
    else if((A*2+B)==(X*2+Y)){
        printf("Equal");
    }
    else{
        printf("Ronaldo");
    }

}
