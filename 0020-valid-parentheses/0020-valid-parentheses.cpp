class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                // for open bracket --> just push
                st.push(ch);
            } else {
                // Closing bracket
                if (!st.empty()) {
                    if ((ch == ')' && st.top() == '(') ||
                        (ch == '}' && st.top() == '{') ||
                        (ch == ']' && st.top() == '[')) {
                        st.pop();
                    } else {
                        return false;
                    }

                } else {
                    return false;
                }
            }
        }
        if (st.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};