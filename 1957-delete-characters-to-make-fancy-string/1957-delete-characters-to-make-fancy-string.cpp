class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            count += 1;
            if (count < 3) {
                ans += s[i];
            }
            if (s[i] != s[i + 1]) {
                count = 0;
            }
        }
        return ans;
    }
};