class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0;
        int ans1 = INT_MIN, ans2 = INT_MIN;

        for(int val : nums)
        {
            if(ans1 == val)
            {
                c1++;
            }
            else if(ans2 == val)
            {
                c2++;
            }
            else if(c1 == 0)
            {
                ans1 = val;
                c1 = 1;
            }
            else if(c2 == 0)
            {
                ans2 = val;
                c2 = 1;
            }
            else
            {
                c1--;
                c2--;
            }
        }

        c1 = 0;
        c2 = 0;

        for(int val : nums)
        {
            if(val == ans1)
                c1++;

            if(val == ans2)
                c2++;
        }

        vector<int> ans;

        if(c1 > nums.size()/3)
            ans.push_back(ans1);

        if(c2 > nums.size()/3 && ans2 != ans1)
            ans.push_back(ans2);

        return ans;
    }
};