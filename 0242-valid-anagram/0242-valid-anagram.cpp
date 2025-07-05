class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        vector<int> arrOne;
        vector<int> arrTwo;
        for (int i = 0; i < s.size(); i++) {
            arrOne.push_back(s[i] - 'a');
            arrTwo.push_back(t[i] - 'a');
        }
        sort(arrOne.begin(), arrOne.end());
        sort(arrTwo.begin(), arrTwo.end());
        for (int i = 0; i < arrOne.size(); i++) {
            if (arrOne[i] != arrTwo[i]) {
                return false;
            }
        }
        return true;
    }
};