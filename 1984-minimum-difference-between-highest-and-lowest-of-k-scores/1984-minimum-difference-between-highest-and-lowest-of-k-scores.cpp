class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int minDiffValue = INT_MAX;

        sort(begin(nums), end(nums));

        int i = 0;
        int j = k - 1;

        while (j < n) {
            int minValue = nums[i];
            int maxValue = nums[j];

            minDiffValue = min(minValue, maxValue - minValue);

            i++;
            j++;
        }

        return minDiffValue;
    }
};