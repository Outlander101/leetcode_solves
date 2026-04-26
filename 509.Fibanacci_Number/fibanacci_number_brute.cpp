#include <iostream>

class Solution{

public:
    int fib(int n) {
        if (n <= 1)
            return n;
        else
            return fib(n-2) + fib(n-1);
    }
};

int main()
{
    Solution sol;
    int num = 2;
    int res = sol.fib(num);
    std::cout << "Fibanacci Number of " << num << " is " << res << std::endl;
    return 0;
}

/*
Directly implement: (Recursive call)
F(n)=F(n−1)+F(n−2)

Complexity
Time: O(2ⁿ) (exponential)
Space: O(n) (call stack)
*/