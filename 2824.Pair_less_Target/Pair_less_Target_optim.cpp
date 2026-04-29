#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int len = nums.size();
        if (len < 2) return 0;

        int count = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            int limit = target - nums[i];
            int j = lower_bound(nums.begin() + i + 1, nums.end(), limit) - nums.begin();
            count += j - (i + 1);
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1,1,2,3,1};
    int target =  2;
    cout << "Count Pairs Whose Sum is Less than Target: " << sol.countPairs(nums, target) << endl;
    return 0;
}

/*
Sort array
For each i, find largest j such that:
nums[i] + nums[j] < target

Complexity
Time: O(n log n)
Space: O(1)
*/