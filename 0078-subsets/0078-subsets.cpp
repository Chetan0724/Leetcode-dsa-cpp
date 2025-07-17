class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int subset_count = (1 << n); // (2 ^ n)
        for (int mask = 0; mask < subset_count; mask++) {
            vector<int> subset;
            for (int i = 0; i < n; ++i) {
                if ((mask & (1 << i)) != 0) {
                    subset.push_back(nums[i]);
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};