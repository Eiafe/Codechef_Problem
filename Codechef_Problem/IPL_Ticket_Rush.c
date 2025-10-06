#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);

    while(T--){
        int n,t;
        scanf("%d%d",&n,&t);
        if(t>n){
            printf("0\n");

        }
        else{
                int res=n-t;
            printf("%d%\n",res);
        }


    }
}
