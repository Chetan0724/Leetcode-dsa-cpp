class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1)
            return n;
        int ans = 0;
        int prevOne = 0;
        int prevTwo = 1;
        for (int i = 2; i <= n; i++) {
            ans = prevOne + prevTwo;
            prevOne = prevTwo;
            prevTwo = ans;
        }
        return ans;
    }
};