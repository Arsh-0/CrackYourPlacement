class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map <int, int> m;     // will be used to store the frequency of each.
        for(auto &i : nums) m[i]++;

        int index = 0;  // initial filling position
        for(int i = 0; i < 3; ++i)  // iterate for 0, 1 and 2
        {
            while(m[i]--) nums[index++] = i;    // fill as many times it occured in array.
        }
    }
};
