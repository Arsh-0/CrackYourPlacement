class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /* The first solution was using extra space, O(n) in worst case of all elements being unique,
        Let's make use of the sorted property instead that all the same element will folk together in sorted array.
        Which means we simply wait to encounter a different element than what we have at current position. */
        int pos = 0;
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[pos] != nums[i]) swap(nums[++pos], nums[i]);
        }

        return pos + 1;
    }
};
