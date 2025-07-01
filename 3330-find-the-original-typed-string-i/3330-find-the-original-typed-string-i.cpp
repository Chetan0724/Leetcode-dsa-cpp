class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        int ans = 1;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] != word[i + 1] || i == word.size() - 1) {
                ans = ans + (count - 1);
                count = 1;
            } else {
                count++;
            }
        }
        return ans;
    }
};