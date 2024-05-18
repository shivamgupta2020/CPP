#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define vvi vector<vector<int>>
#define vi vector<int>

void solve(){
   int sum, time;
   cin>>sum>>time;
   if(sum<1000){
    sum+=1000;
    time--;
   }
   while (time--)
   {
    sum = sum*2;
    /* code */
   }
   cout<<sum<<endl;
   
}

int main(){
    int z;
    cin>>z;
    while(z--){
        solve();
    }
}