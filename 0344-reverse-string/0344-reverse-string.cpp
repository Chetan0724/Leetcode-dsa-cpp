class Solution {
public:
    void reverseString(vector<char>& s) {
        int m = 0;
        int n = s.size()-1;
        while(m < n)
        {
            swap(s[m], s[n]);
            m++;
            n--;
        }
    }
};