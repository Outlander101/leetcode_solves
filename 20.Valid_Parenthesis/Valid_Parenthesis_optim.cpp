#include<iostream>
#include<stack>
#include<string>

using namespace std;

class Solution{
public:
    bool isValid(string s){
        stack<char> st;
        for (char c: s) {
            if (c == '(' || c =='[' || c == '{')
            st.push(c);
            else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{'))
                    return false;
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