class Solution {
public:
    int searchInsert(vector<int>& num, int t) {
        int low = 0;
        int high = num.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (num[mid] == t)
                return mid;
            else if (num[mid] < t)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};