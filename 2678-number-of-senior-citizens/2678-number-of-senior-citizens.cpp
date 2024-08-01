class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniors = 0;
        for(auto &i : details)
        {
            int x = (i[11] - '0') * 10 + (i[12] - '0');
            if(x > 60) seniors++;
        }

        return seniors;
    }
};