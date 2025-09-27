#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool prime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        return false;

    }
    return true;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int a;
    scanf("%d",&a);
    if(prime(a)){
        printf("Yes\n");
    }
    else {
        printf("no\n");
    }
    }



}
