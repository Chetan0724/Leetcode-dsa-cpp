class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int m = 0;
        int n = 1;
        while (n < nums.size()) {
            if (nums[m] != 0) {
                m++;
                n++;
            } else {
                if (nums[n] == 0) {
                    n++;
                } else {
                    swap(nums[m], nums[n]);
                    m++;
                    n++;
                }
            }
        }
    }
};