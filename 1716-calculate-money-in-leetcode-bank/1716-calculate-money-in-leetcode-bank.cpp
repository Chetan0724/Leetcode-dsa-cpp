class Solution {
public:
    int totalMoney(int n) {
        int num = n / 7;
        int rem = n % 7;
        int ans = 0;
        for (int i = 1; i <= num; i++) {
            ans = (7 * i + 21) + ans;
        }
        ans = ans + (((num + 1) * rem) + (((rem - 1) * (rem)) / 2));
        return ans;
    }
};