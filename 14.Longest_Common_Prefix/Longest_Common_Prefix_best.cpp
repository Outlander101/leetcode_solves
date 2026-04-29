#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string> strs) {
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs.back();
        int i = 0;
        while (i < first.size() && first[i] == last[i])
            i++;
        return first.substr(0, i);
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
After sorting:
Only compare:
first string & last string
Because they are maximally different

Complexity
Time: O(n log n + m)
Space: O(1)
*/