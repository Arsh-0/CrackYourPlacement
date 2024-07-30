class NumArray {
    int * arr;
public:
    NumArray(vector<int>& nums) {
        arr = new int[nums.size() + 1]; // extra for the zeroth starting point.
        arr[0] = 0;
        for(int i = 1; i <= nums.size(); ++i) arr[i] = arr[i - 1] + nums[i - 1]; // created a prefix sum array instead.
    }
    
    int sumRange(int left, int right) {
        return arr[right + 1] - arr[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */