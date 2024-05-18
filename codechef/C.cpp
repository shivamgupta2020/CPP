#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define vvi vector<vector<int>>
#define vi vector<int>

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int wins = 0;
   for(int i=0;i<n;i++){
    if(i==n-1){
        wins++;
        continue;
    }
    if(s[i]==s[i+1]){

        i++;
    }
    wins++;
   }
   cout<<wins<<endl;

}

int main(){
    int z;
    cin>>z;
    while(z--){
        solve();
    }
}