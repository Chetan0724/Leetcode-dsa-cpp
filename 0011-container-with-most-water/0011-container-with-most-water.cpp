class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                int value = (j-i) * min(height[i], height[j]);
                if(value > maxArea)
                {
                    maxArea = value;
                }
            }
        }
        return maxArea;
    }
};