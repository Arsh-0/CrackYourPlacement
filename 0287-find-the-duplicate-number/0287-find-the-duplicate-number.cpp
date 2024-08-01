class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /* A variation of tortoise and hare algorithm, where we first detect the cycle and once that is done, reset slow pointer while fast will stay where it was
        we run both pointers at the same pace till they meet again, this is the place which is the beginning of the cycle. */
        int fast = 0, slow = 0;

        // cycle detection
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(fast != slow);

        // cycle starting point search
        slow = 0;
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};