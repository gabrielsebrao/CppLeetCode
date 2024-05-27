// desafio 001 - https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> targetNums;

        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target && i != j)
                {
                    targetNums.push_back(i);
                    targetNums.push_back(j);
                    return targetNums;
                }
            }
        }

        return targetNums;
    }
};