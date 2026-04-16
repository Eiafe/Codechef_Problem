#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x >>n;

       int totall=n/100;
       if(n%100 !=0){
          totall++;
       }
       if(x>=totall){
        cout<<" 0 "<<endl;
        }
        else{
            int extra=totall-x;
            cout<<extra<<endl;
        }



    }


}
