#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if ((x < 0) || ( x % 10 == 0 && x != 0))
            return false;
        
        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return (x == rev) || ( x == rev / 10);
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
You don’t need full reversal.
Stop at halfway
Compare:
even digits: x == rev
odd digits: x == rev/10

Critical Edge Cases
Negative, Ends with 0 (but not 0 itself) -> False

Complexity
Time: O(log₁₀ n)
Space: O(1)
*/