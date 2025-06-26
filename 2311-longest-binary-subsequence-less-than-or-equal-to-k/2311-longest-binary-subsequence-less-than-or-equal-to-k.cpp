class Solution {
public:
    int longestSubsequence(string s, int k) {
        int num = 0;
        int length = 0;
        int m = s.size() - 1;
        for (int i = m; i >= 0; i--) {
            if (s[i] == '0') {
                length++;
                continue;
            } else {
                num = (int)pow(2, (m - i)) + num;
                if (num <= k)
                    length++;
            }
        }
        return length;
    }
};