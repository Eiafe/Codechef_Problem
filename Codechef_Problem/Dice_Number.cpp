#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int mx =a1;
        int mi=a1;
        int sum=a1+a2+a3;
         if(a2>mx){
                mx=a2;
         }
         if(a3>mx){
            mx=a3;
         }
         if(a2<mi){
            mi=a2;
         }
         if(a3<mi){
            mi=a3;
         }
         int x=sum-mx-mi;
         int Alice=mx*100+x*10+mi;

          mx=b1;
         mi=b1;
          sum=b1+b2+b3;
         if(b2>mx){
            mx=b2;
         }
         if(b3>mx){
            mx=b3;
         }
         if(b2<mi){
            mi=b2;

         }
         if(b3<mi){
            mi=b3;
         }
         int y=sum-mx-mi;
         int Bob=mx*100+y*10+mi;
         if(Alice>Bob){
            cout<<"Alice"<<endl;
         }
         else if(Bob>Alice){
            cout<<"Bob"<<endl;
         }
         else{
            cout<<"Tie"<<endl;
         }







    }

}
