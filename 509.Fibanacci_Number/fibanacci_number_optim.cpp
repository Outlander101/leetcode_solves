#include <iostream>
#include <vector>

using namespace std;

class Solution{

public:
    // Helper function which caches the calculated value to vector<int> F, later used instead of recursion.
    int fib_helper(int n, vector<int>& F)
    {
        if (n <= 1)
            return n;
        if (F[n] != -1)
            return F[n];
        return F[n] = fib_helper(n-1, F) + fib_helper(n-2, F);
    }

    int fib(int n) {
        // Initialize vector<int> F with n+1 size and -1 value.
        vector<int> F(n+1, -1);
        return fib_helper(n, F);
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
Cache results to avoid recomputation (Memorization)

Complexity
Time: O(n)
Space: O(n)
*/