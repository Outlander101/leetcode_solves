#include<algorithm>
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
        vector<pair<int, int>> arr;
        for (int i = 0; i < num_len; i++) // create a new vector with pairs<int, int> {value, index}
            arr.push_back({nums[i], i});
        sort(arr.begin(), arr.end()); // Sort the new vector pair

        int left = 0, right = nums.size() - 1; // use sliding window approach
        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            if (sum == target)
                return {arr[left].second, arr[right].second};
            else if (sum < target)
                left++;
            else
                right--;
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
Sort array
Use two pointers
Move inward based on sum

Issue: Original indices lost -> must track indices

Complexity
Time: O(n log n)
Space: O(n) (for storing indices)
*/
