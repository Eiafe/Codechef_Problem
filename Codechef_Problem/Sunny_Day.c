#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int x;
        scanf("%d",&x);
        if(x>24){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}
