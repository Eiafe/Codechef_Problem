#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double x,y,z;
        cin>>x>>y>>z;
        double tottal=(x*y);
        double persen=(z*100)/tottal;
        if(persen>50){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
