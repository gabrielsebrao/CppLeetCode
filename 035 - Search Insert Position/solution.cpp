// desafio 035 - https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int correctPosition = 0;
        for(int i = 0; i < nums.size(); i++) {
            std::cout << correctPosition << '\n';
            (target > nums[i]) ? correctPosition = i+1 : correctPosition = correctPosition;
        }

        return correctPosition;
    }
};