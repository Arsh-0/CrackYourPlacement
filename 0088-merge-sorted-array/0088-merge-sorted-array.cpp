class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0) nums1 = nums2;
        if(n == 0) return;
        
        int ptr1 = m - 1, ptr2 = n - 1;
        for(int i = m + n - 1; i >= 0; --i)
        {
            if(ptr1 < 0 or ptr2 < 0) break;
            if(nums1[ptr1] > nums2[ptr2]) nums1[i] = nums1[ptr1--];
            else nums1[i] = nums2[ptr2--];
        }
    }
};