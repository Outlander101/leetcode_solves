#include <iostream>

using namespace std;

// Fibanacci Series: 0,1,1,2,3,5,8....

class Solution{
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        int l0 = 0, l1 = 1;
        for(int i = 2; i < n; i++)
        {
            int l3 = l0 + l1;
            l0 = l1;
            l1 = l3;
        }
        return l1;
    }
};

int main()
{
    Solution sol;
    int num = 2;
    int res = sol.fib(num);
    cout << "Fibanacci Number of " << num << " is " << res << endl;
    return 0;
}

/*
Instead of Recursion, a loop will yield better performance here due to less stack calls.

Complexity
Time: O(n)
Space: O(1)
*/