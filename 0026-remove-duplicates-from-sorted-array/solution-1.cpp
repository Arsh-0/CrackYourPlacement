class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /* since unique means set, while the question demands for it to be sorted, simply store unique elements and refill the vector with the same. */
        set <int> s;
        int index = 0;

        for(auto &i : nums) s.insert(i);
        for(auto &it : s) nums[index++] = it;

        return index;
    }
};
