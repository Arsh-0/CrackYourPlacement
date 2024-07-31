class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> m;     // to store <element, index> for keeps tabs on index
        for(int i = 0; i < nums.size(); ++i)
        {
            int remains = abs(target - nums[i]);
            if(m.find(remains) != m.end()) return {m[remains], i};
            else m[nums[i]] = i;
        }

        return {-1};
    }
};