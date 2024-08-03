class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(arr.size() != target.size()) return false;

        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        bool isEqual = true;
        for(int i = 0; i < target.size(); ++i)
        {
            if(target[i] != arr[i])
            {
                isEqual = false;
                break;
            }
        }

        return isEqual;
    }
};