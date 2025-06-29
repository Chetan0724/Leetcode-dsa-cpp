class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int m = 0;
        int n = nums.size() - 1;
        int count = 0;
        while (n >= m) {
            if (nums[n] == val) {
                nums[n] = nums[n] - 1;
                n--;
                count++;
            } else {
                if (nums[m] == val) {

                    int x = nums[n] - nums[m];
                    nums[m] = nums[m] + x;
                    m++;
                    n--;
                    count++;
                } else {
                    m++;
                }
            }
        }
        return nums.size() - count;
    }
};