class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;    // initial starting position
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != 0) swap(nums[i], nums[pos++]);    // push to front if non - zero, all the zeros will end up behind this way.
        }
    }
};
