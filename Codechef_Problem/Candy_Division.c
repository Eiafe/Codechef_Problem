#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int x;
        scanf("%d",&x);
        for(int i=1;i<=x;i++){
            if(x%3==0){
                printf("YES\n");
                break ;
            }
            else{
                printf("NO\n");
                break;
            }
        }





    }

}
