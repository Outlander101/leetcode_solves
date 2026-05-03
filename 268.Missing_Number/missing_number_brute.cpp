#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        for(int i = 0; i <= n; i++)
        {
            bool found = false;
            for(int j = 0; j < n; j++)
            {
                if(nums[j] == i)
                {
                    found = true;
                    break;
                }
            }
            if(!found)
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int res = sol.missingNumber(nums);
    cout << "Missing number is " << res << endl;
    return 0;
}


/*
For each number from 0 to n, check if it exists in array.
Complexity
Time: O(n²)
Space: O(1)
*/