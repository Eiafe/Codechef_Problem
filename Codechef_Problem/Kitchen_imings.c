#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a, b;
        scanf("%d %d",&a,&b);
        int result = b - a;
        printf("%d\n", result);
    }
    return 0;
}

