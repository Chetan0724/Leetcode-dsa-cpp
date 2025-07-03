class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2)
        {
            return n;
        }
        int ans = 0;
        int prevOne = 1;
        int prevTwo = 2;
        for (int i = 3; i <= n; i++) {
            ans = prevOne + prevTwo;
            prevOne = prevTwo;
            prevTwo = ans;
        }
        return ans;
    }
};