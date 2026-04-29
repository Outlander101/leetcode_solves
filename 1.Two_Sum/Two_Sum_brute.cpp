#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num_len = nums.size();
        if (num_len < 2) { // vector size check
            return {};
        }
        vector<int> result;
        for(int outer = 0; outer < num_len - 1; outer++) { // outer loop starts from 0 to vector size -1
            for(int inner = 1; inner < num_len; inner++) { // inner loop starts from 1 to vector size
                if (nums[outer] + nums[inner] == target) {
                    result.push_back(outer);
                    result.push_back(inner);
                    return result;
                }
            }
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
Check all possible pairs (i, j) and see if:
nums[i] + nums[j] == target

Complexity
Time: O(n²)
Space: O(1)
*/
