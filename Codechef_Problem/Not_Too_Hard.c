#include<stdio.h>
int main(){
    int n,x;
    int sum=0;
    scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++){
           int s;
            scanf("%d",&s);
        if(s<=x){
         sum+=s;
        }
    }
    printf("%d",sum);


}

