class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector <int> preSum(nums.size(), 0), postSum(nums.size(), 0);
        int n = nums.size();
        for(int i = 1; i < n; ++i)
        {
            preSum[i] = preSum[i - 1] + nums[i - 1];
            postSum[n - i - 1] = postSum[n - i] + nums[n - i];
        }

        for(int i = 0; i < n; i++)
        {
            if(preSum[i] == postSum[i]) return i;
        }

        return -1;
    }
};