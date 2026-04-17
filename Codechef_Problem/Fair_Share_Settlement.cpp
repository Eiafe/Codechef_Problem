#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin>>t;
    while(t--){
        int n,k;
        cin>> n >> k;
        int f=n/(k+1);
        int payment=f*k;
        int fi=n-payment;

        cout<<fi<<endl;

    }

}
