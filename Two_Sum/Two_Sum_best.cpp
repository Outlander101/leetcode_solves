#include<algorithm>
#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num_len = nums.size();
        if (num_len < 2) {
            return {};
        }
        unordered_map<int, int> num_map; // value -> index
        for (int i = 0; i < num_len; i++) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end())
                return {num_map[complement], i};
            num_map[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11 ,15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    if (!result.empty())
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}

/* 
compute:
y = target - x
Store seen elements in a hash map.

Complexity
Time: O(n)
Space: O(n)
*/