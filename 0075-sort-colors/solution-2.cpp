class Solution {
public:
    void sortColors(vector<int>& nums) {
        /* without using extra O(n) extra space as in brute force, we can simple iterate over the order array of 3 elements,
        and set the position based off of it, making it O(3 * n) solution i.e. O(n) solution. */
        
        vector <int> order = {0, 1, 2};     // all flags with colors
        int pos = 0;    // initial position or index
        for(auto &i : order)
        for(int j = 0; j < nums.size(); ++j)
        {
            if(i == nums[j]) swap(nums[pos++], nums[j]);
        }
    }
};
