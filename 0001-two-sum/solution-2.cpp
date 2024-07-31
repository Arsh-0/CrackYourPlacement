class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* The brute force approach takes complexity of O(n²) due to the nested loops,
        we can optimize this by increasing space complexity to be O(n) just to store indexes,
        and iterate while checking if we have encountered the other subpart before or not, if we did...
        return that index with the current one. This approach is of O(n) Time and Space complexity. */
        
        unordered_map <int, int> m;     // to store <element, index> for keeps tabs on index
        for(int i = 0; i < nums.size(); ++i)
        {
            int remains = target - nums[i];
            if(m.find(remains) != m.end()) return {m[remains], i};    // found the other sub-part
            else m[nums[i]] = i;    // updating map with current value, if not found
        }

        return {-1};    // unreachable, as according to question a valid pair always exists.
    }
};
