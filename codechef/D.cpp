#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vi vector<int>

int sum_of_digit(string s)
{
    int sum = 0;
    int x = stoi(s);
    while (x)
    {
        sum += x % 10;
        x = x / 10;
        /* code */
    }
    return sum;
}

int repeater(string s)
{
    int sumDigit = sum_of_digit(s);
    string str = to_string(sumDigit);
    while (str.length() != 1)
    {
        int x = sum_of_digit(str);
        str = to_string(x);
        /* code */
    }
    return stoi(str);
}

void solve()
{
    ll n;
    cin >> n;
    // // vector //till 18th term
    // vector<ll> v = {46, 496, 4996, 49996, 499996, 4999996, 49999996, 499999996, 4999999996, 49999999996, 499999999996, 4999999999996, 49999999999996, 499999999999996, 4999999999999996, 49999999999999996, 499999999999999996, 4999999999999999996};
    // vector<ll> v2 = {0,1, 3, 6, 10, 15, 21, 28, 36, 45};
    // int digit = 0;
    // int upto = n%10;
    // n = n/10;
    // int y = n%10;
    // int w = y*10+1;
    // int z = y*10+upto;
    // for(int i = w;i<=z;i++){
    //     sum+=repeater(to_string(i));
    // }
    // while (n)
    // {
    //     int x = n%10;
    //     if (x!=0) sum+=v[digit]*(x)+v2[x-1];
    //     digit++;
    //     n = n / 10;
    // }
    ll r = n%9;
    ll sum = (n/9) * 45 + (r*(r+1))/2;
    cout<<sum<<endl;
}


int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        solve();
    }
}