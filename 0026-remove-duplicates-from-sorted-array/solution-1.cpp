class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> s;
        int index = 0;

        for(auto &i : nums) s.insert(i);
        for(auto &it : s) nums[index++] = it;

        return index;
    }
};
