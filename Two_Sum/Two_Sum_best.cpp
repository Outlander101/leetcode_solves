#include<algorithm>
#include<iostream>
#include <unordered_map>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num_len = nums.size();
        if (num_len < 2) { // vector size less than 2 check
            return {};
        }
        unordered_map<int, int> num_map; // value -> index [hashmap]
        for (int i = 0; i < num_len; i++) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) // if complement (value) is found in hashmap
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
