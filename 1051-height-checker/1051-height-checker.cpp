class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        vector<int> expected = heights;

        for (int i = 0; i < expected.size(); i++) {
            int j = i + 1;
            while (j < expected.size()) {
                if (expected[j] < expected[i]) {
                    swap(expected[j], expected[i]);
                }
                j++;
            }
        }

        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                ans++;
            }
        }
        return ans;
    }
};