class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0;
        int maxSum=INT_MIN;

        for(int vals: nums){
            curSum+=vals;
            maxSum=max(curSum,maxSum);

            if(curSum<0){
                curSum=0;
            }
        }
        return maxSum;
    }
};