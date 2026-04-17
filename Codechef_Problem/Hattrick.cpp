#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            char a,b,c,d,e,f;

            cin>>a>>b>>c>>d>>e>>f;
           int count=0;

           if(a=='W') count++;
           if(b=='W') count++;
           if(c=='W') count++;
           if(d=='W') count++;
           if(e=='W') count++;
           if(f=='W') count++;





         if(count>=3){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }

    }


