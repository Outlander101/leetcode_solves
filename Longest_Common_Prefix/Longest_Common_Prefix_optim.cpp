#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string> strs) {
        if (strs.empty()) return "";
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != c)
                    return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"flowers", "flow", "flight"};
    string lc_prefix = sol.longestCommonPrefix(strs);
    cout << "Largest common Prefix of is " << lc_prefix << endl;
    return 0;
}


/*
Compare column-wise
Stop at first mismatch

Complexity
Time: O(n * m)
Space: O(1)
*/