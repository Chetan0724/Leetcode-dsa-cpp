// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        while (start < end) {
            int mid = start + (end - start) / 2;
            bool result = isBadVersion(mid);
            if (result == true) {
                if (!isBadVersion(mid - 1))
                    return mid;
                end = mid-1;
            } else {
                start = mid+1;
            }
        }
        return start;
    }
};