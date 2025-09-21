#include<stdio.h>
int main(){
    int t;
    scanf("%d\n",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x>=80){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

}
