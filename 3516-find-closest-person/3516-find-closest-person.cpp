class Solution {
public:
    int findClosest(int x, int y, int z) {
        int ans1 = abs(z - x);
        int ans2 = abs(z - y);

        if (ans1 == ans2) {
            return 0;
        } else if (ans1 > ans2) {
            return 2;
        } else {
            return 1;
        }
    }
};