#include<bits/stdc++.h>
using namespace std;

int main(){
    int z;
    cin>>z; 
    while(z--){
        int n;
        cin>>n;
        if(n<3){
            cout<<n%3<<endl;
        }
        else if(n%5 == 0 || n%3 ==0){
            cout<<0<<endl;
        }
        else{
            int mini = INT_MAX;
            while(n>=3)
            {
                n=n-3;
                mini = min(n%5,mini);
            }
            cout<<mini<<endl;
        }
    }
}