class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> copy;
        for(auto &i : nums)
        {
            if(i != 0) copy.push_back(i);
        }

        int remains = nums.size() - copy.size();
        while(remains--) copy.push_back(0);
        nums = copy;
    }
};