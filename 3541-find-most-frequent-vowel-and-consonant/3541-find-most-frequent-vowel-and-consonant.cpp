class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        int vCount = 0;
        int cCount = 0;

        for (auto i : mp) {
            if (i.first == 'a' || i.first == 'e' || i.first == 'i' ||
                i.first == 'o' || i.first == 'u') {
                if (i.second > vCount) {
                    vCount = i.second;
                }
            } else {
                if (i.second > cCount) {
                    cCount = i.second;
                }
            }
        }
        return vCount + cCount;
    }
};