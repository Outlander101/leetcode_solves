#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int len = nums.size();
        if (len < 2) return 0;

        sort(nums.begin(), nums.end());
        int left = 0, right = len - 1;
        int count = 0;
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                count += (right - left);
                left++;
            }
            else
                right--;
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
After sorting:
If:
nums[left] + nums[right] < target
Then:
ALL elements between (left, right) with left are valid
So:
count += (right - left)

Complexity
Time: O(n log n) (sorting)
Space: O(1)
Counting step: O(n)
*/