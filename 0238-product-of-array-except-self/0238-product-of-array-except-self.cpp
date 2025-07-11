class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftAns;
        int leftPro = 1;
        leftAns.push_back(leftPro);
        for (int i = 1; i < nums.size(); i++) {
            leftPro = leftPro * nums[i - 1];
            leftAns.push_back(leftPro);
        }

        int i = nums.size() - 1;
        int rightPro = 1;
        while (i >= 0) {
            leftAns[i] = leftAns[i] * rightPro;
            rightPro = rightPro * nums[i];
            i--;
        }
        return leftAns;
    }
};