class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> s2;

        int maxCount = 0;
        int left = 0;

        for(int i = 0; i < s.size(); i++)
        {
            while(s2.find(s[i]) != s2.end())
            {
                s2.erase(s[left]);
                left++;
            }

            s2.insert(s[i]);

            maxCount = max(maxCount, i - left + 1);
        }

        return maxCount;
    }
};
