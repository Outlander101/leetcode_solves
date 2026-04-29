#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int len = nums.size();
        if (len < 2) return 0;
        
        int count = 0;
        for (int i = 0; i < len; i++) {
            for (int j = 1; j < len; j++) {
                if (nums[i] + nums[j] < target) 
                    count++;
            }
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
Check all pairs (i, j) where i < j

Complexity
Time: O(n²)
Space: O(1)
*/