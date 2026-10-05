class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int ANS = 0;

        for(int val : nums)
        {
            if(c == 0)
            {
                ANS = val;
            }

            if(ANS == val)
                c++;
            else
                c--;
        }

        return ANS;
    }
};