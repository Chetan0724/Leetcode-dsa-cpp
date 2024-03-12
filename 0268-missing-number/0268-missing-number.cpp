class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sizeOfArray = nums.size();
        int n = sizeOfArray + 1;
        // int sumOfNumbers = (n/2)*(2*0+(n - 1)*1); Wrong
        int sumOfNumbers = (n * ((2 * 0) + (n - 1) * 1))/2;
        int sum = 0;
        for(int i = 0; i < sizeOfArray; i++) {
            sum = sum + nums[i];
        }
        int ans = sumOfNumbers - sum;
        return ans;
    }
};