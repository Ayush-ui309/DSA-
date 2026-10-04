class Solution {
public:
    vector<int> getUniqueSorted(vector<int>& nums) {
        vector<int> ans;

        int N[10001] = {0};

        for(int i = 0; i < nums.size(); i++) {
            N[nums[i]] = 1;
        }

        for(int k = 1; k <= 10000; k++) {
            if(N[k] == 1) {
                ans.push_back(k);
            }
        }

        return ans;
    }
};