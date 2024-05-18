#include<bits/stdc++.h>
using namespace std;
#define int  long long int
#define vvi vector<vector<int>>
#define vi vector<int>

void solve(){
   int a,b,c;
   cin>>a>>b>>c;
   if((a+b+c)%2!=0) cout<<-1<<endl;
   else{
    if(a+b<=c) cout<<a+b<<endl;
    else cout<<(a+b+c)/2<<endl;
   }
}

int32_t main(){
    int z;
    cin>>z;
    while(z--){
        solve();
    }
}