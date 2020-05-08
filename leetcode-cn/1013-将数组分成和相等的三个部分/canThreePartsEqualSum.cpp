/*
https://leetcode-cn.com/problems/partition-array-into-three-parts-with-equal-sum/
题解：
通过计算数组所有元素的和，计算出若能进行平分后，每部分的和。
*/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int iSum = 0;
        for(int i = 0; i < A.size(); ++i)
        {
            iSum += A[i];
        }

        if(iSum % 3 != 0)
        {
            return false;
        }

        int iPartSum = iSum / 3;
        int iSplitIndex = 0;
        int iTempPartSum = 0;

        for(; iSplitIndex < A.size(); ++iSplitIndex)
        {
            iTempPartSum += A[iSplitIndex];
            if(iTempPartSum == iPartSum)
            {
                break;
            }
        }

        for( ++iSplitIndex; iSplitIndex < A.size() - 1; ++iSplitIndex)
        {
            iTempPartSum += A[iSplitIndex];
            if(iTempPartSum == iPartSum * 2)
            {
                return true;
            }
        }
        return false;
    }
};
