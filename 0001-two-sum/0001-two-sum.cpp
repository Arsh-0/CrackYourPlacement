class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 1; ++i)    // select 1st index
        for(int j = i + 1; j < nums.size(); ++j)    // select 2nd index, preferably after the 1st one
        {
            if(nums[i] + nums[j] == target) return {i, j};  // try out every combination till we find the answer.
        }

        return {-1};    // will never reach here as a valid answer always exist according to the question.
    }
};