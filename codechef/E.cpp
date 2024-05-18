#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vvi vector<vector<int>>
#define vi vector<int>

void solve()
{
    int n, q;
    cin >> n >> q;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < q; i++)
    {
        int end;
        cin >> end;
        vi temp(v.begin(), v.begin() + end);

        sort(temp.begin(), temp.end());
        int neg = (end - 1) / 2;
        int sum = 0;
        for (int j = 0, x = 1; j < end; j++)
        {
            if (x > neg)
            {
                sum += temp[j];
            }
            else
            {
                sum -= temp[j];
                x++;
            }
        }
        cout << sum <<" ";
    }
}

int32_t main()
{
    int z;
    cin >> z;
    while (z--)
    {
        solve();
    }
}