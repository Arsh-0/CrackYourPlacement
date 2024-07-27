class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0;
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[pos] != nums[i]) swap(nums[++pos], nums[i]);
        }

        return pos + 1;
    }
};