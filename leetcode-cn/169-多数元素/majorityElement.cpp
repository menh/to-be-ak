/*
https://leetcode-cn.com/problems/majority-element/

*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int result = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(count == 0)
            {
                result = nums[i];
                count++;
            }
            else
            {
                if(result == nums[i])
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return result;
    }
};
