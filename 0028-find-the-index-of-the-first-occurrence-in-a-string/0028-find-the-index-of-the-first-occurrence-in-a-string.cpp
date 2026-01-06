class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        int indexAns = -1;

        while(j < needle.size() && i < haystack.size()) {
            if(haystack[i] == needle[j] && j == needle.size() - 1) {
                return indexAns;
            } else if(haystack[i] != needle[j]) {
                j = 0;
                indexAns = -1;
            } else {
                if(indexAns == -1) {
                indexAns = i;
                }
            }
            i++;
            j++;
        }
        return -1;
    }
};