class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < stones.size(); i++) {
            mp[stones[i]]++;
        }
        for (auto i : mp) {
            for (int j = 0; j < jewels.size(); j++) {
                if (jewels[j] == i.first) {
                    count += i.second;
                }
            }
        }
        return count;
    }
};