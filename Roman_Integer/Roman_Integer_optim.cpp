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

        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i+1 < s.size() && mp[s[i]] < mp[s[i+1]])
                res -= mp[s[i]];
            else
                res += mp[s[i]];
        }
        return res;
    }
};

int main() {
    Solutions sol;
    string s = "LVIII";
    int result = sol.romanToInt(s);
    cout << s << " : " << result << endl;
    return 0;
}

/*
If:
current < next -> subtract (eg. IV, IX ...)
else -> add

Core Logic
IV -> 1 < 5 -> subtract 1
VI -> 5 > 1 -> add 5

Complexity
Time: O(n)
Space: O(1)
*/