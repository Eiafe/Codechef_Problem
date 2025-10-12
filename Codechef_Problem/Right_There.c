#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
         int people,capasity;
         scanf("%d%d",&people,&capasity);
         if(people<=capasity){
            printf("YES\n");
         }
         else{
            printf("No\n");
         }

    }

}
