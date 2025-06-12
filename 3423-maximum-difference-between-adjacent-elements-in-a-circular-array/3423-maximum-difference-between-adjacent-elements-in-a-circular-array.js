/**
 * @param {number[]} nums
 * @return {number}
 */
var maxAdjacentDistance = function(nums) {
    let maxDiff = 0;
    let size = nums.length;

    for(let i = 0; i < (size - 1); i++) 
    {
        let diff = Math.abs(nums[i] - nums[i+1])
        if(diff > maxDiff) {
            maxDiff = diff;
        }
    }

    let x = Math.abs(nums[size-1] - nums[0])

    if(x > maxDiff) return x;

    return maxDiff;
};