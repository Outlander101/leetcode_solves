#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
class Solutions {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1},{'V', 5},{'X', 10},
            {'L', 50},{'C', 100},{'D', 500},
            {'M', 1000}
        };

        int res = 0, prev = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int cur = mp[s[i]];
            if (cur < prev)
                res -= mp[s[i]];
            else
                res += mp[s[i]];
            prev = cur;
        }
        return res;
    }
};

int main() {
    Solutions sol;
    string s = "MCMXCIV";
    int result = sol.romanToInt(s);
    cout << s << " : " << result << endl;
    return 0;
}

/*
Traverse from right to left:

Keep track of previous value
If current < previous -> subtract
Else -> add

Complexity
Time: O(n)
Space: O(1)
*/