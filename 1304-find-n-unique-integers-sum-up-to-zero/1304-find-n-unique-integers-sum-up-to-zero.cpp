class Solution {
public:
    vector<int> sumZero(int n) {
        int k = n / 2;
        vector<int> ans;

        if (n % 2 == 0) {
            for (int i = 1; i <= k; i++) {
                ans.push_back(i);
                ans.push_back(-i);
            }
        } else {
            for (int i = 1; i <= k; i++) {
                ans.push_back(i);
                ans.push_back(-i);
            }
            ans.push_back(0);
        }
        return ans;
    }
};