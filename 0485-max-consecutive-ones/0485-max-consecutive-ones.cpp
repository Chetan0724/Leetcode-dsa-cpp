class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxAns = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 1) {
                if (count > maxAns) {
                    maxAns = count;
                }
                count = 0;
            } else {
                count++;
                if (i == nums.size() - 1 && count > maxAns) {
                    maxAns = count;
                }
            }
        }
        return maxAns;
    }
};