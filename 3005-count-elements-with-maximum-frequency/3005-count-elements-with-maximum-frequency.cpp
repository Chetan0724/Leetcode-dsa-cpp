class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxFreq = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            maxFreq = max(maxFreq, mp[nums[i]]);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (maxFreq == mp[nums[i]]) {
                ans++;
            }
        }
        return ans;
    }
};