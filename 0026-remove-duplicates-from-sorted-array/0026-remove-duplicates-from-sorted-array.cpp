class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int m = 0;
        int n = 1;
        int count = 1;
        while (n < nums.size()) {
            if (nums[m] == nums[n]) {
                n++;
            } else {
               m++;
               int x = nums[n] - nums[m];
               nums[m] = nums[m] + x;
               count++;
            }
        }
        return count;
    }
};