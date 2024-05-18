#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxSum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        cout<<sum<<endl;
        if (sum < 0)
        {
            sum = 0;
            continue;
        }
        maxSum = max(maxSum, sum);
    }
    return sum;
}

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl;
    
    return 0;
}