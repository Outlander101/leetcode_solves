#include<iostream>
#include<stack>
#include<string>
#include<unordered_map>

using namespace std;

class Solution{
public:
    bool isValid(string s){
        unordered_map<char, char> mp = {
            {')','('}, {']','['},{'}','{'}
        };

        stack<char> st;
        for (char c: s) {
            if (mp.count(c)){
                if (st.empty() || st.top() != mp[c])
                    return false;
                st.pop();
            }
            else {
                st.push(c);
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    string s = "([{}])";
    if (sol.isValid(s))
        cout << "Valid Parenthesis" << endl;
    else
        cout << "Invalid Parenthesis" << endl;
    return 0;
}

/*
Create a Stack
Push opening brackets
On closing, check top of stack
If mismatch, return false

Complexity
Time: O(n)
Space: O(n)
*/