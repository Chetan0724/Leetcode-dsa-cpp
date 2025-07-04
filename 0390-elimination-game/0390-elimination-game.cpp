class Solution {
public:
    void left(vector<int>& arr) {
        int i = 1;
        while (i < arr.size()) {
            arr.erase(arr.begin() + i);
            i++;
        }
    }

    void right(vector<int>& arr) {
        int i = arr.size() - 1;
        while (i > 0) {
            arr.erase(arr.begin() + i);
            i = i - 2;
        }
    }

    void ans(vector<int>& arr) {
        if (arr.size() <= 2)
            return;
        left(arr);
        right(arr);
        ans(arr);
    }

    int lastRemaining(int n) {
        vector<int> arr(n + 1);
        for (int i = 0; i <= n; i++) {
            arr[i] = i;
        }
        ans(arr);
        return arr[1];
    }
};