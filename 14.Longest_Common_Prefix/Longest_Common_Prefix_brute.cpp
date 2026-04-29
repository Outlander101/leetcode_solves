#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string> strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j])
                j++;
            prefix = prefix.substr(0,j);
        }
        return prefix;
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
Take first string as baseline
Compare character-by-character with all others

Complexity
Time: O(n * m)
(n = number of strings, m = min string length)
Space: O(1)
*/