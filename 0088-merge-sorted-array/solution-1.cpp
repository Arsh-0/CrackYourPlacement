class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> nums(m + n);   // taking an auxilary space to store calculations
        int ptr1 = 0, ptr2 = 0, index = 0;
        while(ptr1 < m || ptr2 < n)     // similar operation like merge sort.
        {
            int val1 = (ptr1 < m) ? nums1[ptr1] : INT_MAX;
            int val2 = (ptr2 < n) ? nums2[ptr2] : INT_MAX;

            nums[index++] = (val1 < val2) ? nums1[ptr1++] : nums2[ptr2++];
        }

        nums1 = nums;   // since copying will take extra traversal so O(2 * (m + n)) time complexity and O(m + n) space complexity.
    }
};
