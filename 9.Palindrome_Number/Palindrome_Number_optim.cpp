#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long rev = 0;
        int org = x;
        
        while (x > 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x/10;
        }

        return org == rev;
    }
};

int main() {
    Solution sol;
    int x = 121;
    if(sol.isPalindrome(x))
        cout << x << " is palindrome.";
    else
        cout << x << " is not palindrome.";
    return 0;
}

/*
Reverse the number mathematically and compare

Core Operation
rev=rev×10+digit

Complexity
Time: O(log₁₀ n)
Space: O(1)
*/