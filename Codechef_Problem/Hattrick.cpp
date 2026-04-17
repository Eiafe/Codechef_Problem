#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            char a,b,c,d,e,f;

            cin>>a>>b>>c>>d>>e>>f;

            if((a=='W' && b=='W' && c=='W')||
              (d=='W' && e=='W' && f=='W')||
              (b=='W' && c=='W' && d=='W')||
              (c=='W' && d=='W' && e=='W'))
           {
               cout<<"YES"<<endl;
           }
           else{
              cout<<"NO"<<endl;
           }



    }

    }


