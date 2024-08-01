class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /* Brute force takes O(nlogn) for sorting, while applying Moore's voting algorithm, we can optimize this to O(n). */
        int count = 1, candidate = nums[0];
        for(int i = 1; i < nums.size(); ++i)
        {
            if(candidate == nums[i]) count++;   // if same as candidate, increase support else decrease it
            else count--;

            if(count == 0)  // once an becomes minority, set the current element as new prospective candidate
            {
                candidate = nums[i];
                count = 1;
            }
        }

        return candidate;
    }
};