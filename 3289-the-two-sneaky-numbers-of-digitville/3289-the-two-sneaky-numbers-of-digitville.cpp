class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0 ;
        vector<int>arr;


        for(int i = 0 ; i<n ; i++){
            count = 0;
            for(int j = i ; j<n ; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count >= 2) arr.push_back(nums[i]);
        }
      return arr;
    
    }
};