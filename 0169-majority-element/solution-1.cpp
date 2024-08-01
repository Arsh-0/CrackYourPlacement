class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // because the majority element occurs for half of the list, if sorted must be the element at the mid.
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};
