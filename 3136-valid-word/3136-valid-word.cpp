class Solution {
public:
    bool isValid(string word) {
        int sizeofWord = word.size();
        unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U',
                                      'a', 'e', 'i', 'o', 'u'};
        bool atleastVowel = false;
        bool atleastConsonant = false;
        if (sizeofWord < 3)
            return false;
        for (int i = 0; i < sizeofWord; i++) {
            if (word[i] == '@' || word[i] == '$' || word[i] == '#')
                return false;
            if (isalpha(word[i])) {
                if (vowels.count(word[i])) {
                    atleastVowel = true;
                } else {
                    atleastConsonant = true;
                }
            }
        }
        return atleastVowel && atleastConsonant;
    }
};