#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);

    while(T--){
        int n,t;
        scanf("%d%d",&n,&t);
        if(t>n){
            int Amo=t-n;

            printf("%d\n",Amo);

        }
        else{
                int res=n-t;
            printf("%d\n",res);
        }


    }
}

