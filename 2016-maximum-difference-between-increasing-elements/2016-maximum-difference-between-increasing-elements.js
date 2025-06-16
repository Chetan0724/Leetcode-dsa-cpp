/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumDifference = function(nums) {
    let diff = -1;
    for(let i = 0; i < nums.length; i++)
    {
        for(j = i+1; j < nums.length ; j++)
        {
            if(nums[j] > nums[i] && nums[j] - nums[i] > diff)
            {
                diff = nums[j] - nums[i];
            }
        }
    }
    return diff;
};