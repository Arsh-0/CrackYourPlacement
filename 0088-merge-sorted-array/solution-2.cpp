class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /* The solution uses strictly O(m + n) time complexity for a single traversal and O(1) space complexity */
        int ptr1 = m - 1, ptr2 = n - 1, index = m + n - 1;
        while(ptr1 >= 0 and ptr2 >= 0)  // starting from back helps us remove extra space from solution before.
        {
            if(nums1[ptr1] > nums2[ptr2]) nums1[index] = nums1[ptr1--];
            else nums1[index] = nums2[ptr2--];

            index--;
        }

        // This is required only for nums2 because in case of nums1 if ptr1 remains they all are already at their right places.
        while(ptr2 >= 0) nums1[index--] = nums2[ptr2--];
    }
};
