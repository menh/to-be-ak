/*
动态规划
maxSum[i] = max(maxSum[i - 1] + nums[i], num[i])
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int iResult = 0;
        if(nums.size() == 0)
        {
            return iResult;
        }

        vector<int> vecMaxSum;
        vecMaxSum.push_back(nums[0]);
        iResult = vecMaxSum[0];
        for(int i = 1; i < nums.size(); ++i)
        {
            vecMaxSum.push_back(max(vecMaxSum[i - 1] + nums[i], nums[i]));
            iResult = max(iResult, vecMaxSum[i]);

        }
        return iResult;
    }
};
