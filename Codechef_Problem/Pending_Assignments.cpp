#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>> x >> y >> z;
        int time= z*24*60;
        int mit=x*y;
        if(time>=mit){
            cout<<"YES " <<endl;
        }
        else{
            cout<<" NO "<<endl;
    }

    }


}
