#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
class Solutions {
public:
    int romanToInt(string s) {
        unordered_map<string, int> mp = {
            {"I", 1}, {"V", 5}, {"X", 10},
            {"L", 50}, {"C", 100}, {"D", 500},
            {"M", 1000}, {"IV", 4}, {"IX", 9},
            {"XL", 40}, {"XC", 90}, {"CD",400},
            {"CM", 900}
        };

        int i = 0, res = 0;
        while (i < s.size()) {
            if (i+1 < s.size() && mp.count(s.substr(i,2))) {
                res += mp[s.substr(i,2)];
                i += 2;
            }
            else {
                res += mp[string(1, s[i])];
                i++;
            }
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
Check 2-character substrings first (IV, IX, etc.)
Otherwise process single character
and update result

Complexity
Time: O(n)
Space: O(1)
*/