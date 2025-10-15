class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int currSizeOfIncArr = 1;
        int prevSizeOfIncArr = 0;
        int k = 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > nums[i - 1]) {
                currSizeOfIncArr++;
            } else {
                prevSizeOfIncArr = currSizeOfIncArr;
                currSizeOfIncArr = 1;
            }
            k = max(currSizeOfIncArr / 2, k);
            k = max(k, min(prevSizeOfIncArr, currSizeOfIncArr));
        }
        return k;
    }
};