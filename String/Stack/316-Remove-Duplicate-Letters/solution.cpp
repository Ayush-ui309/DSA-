class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        int freq[26]={0};
        string ans="";
        bool check[26]={false};

        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            int ind=s[i]-'a';
            freq[ind]--;

            if(check[ind]){
                continue;
            }

            while(ans.length()>0 && ans.back()>s[i] && freq[ans.back()-'a']>0){
                check[ans.back()-'a']=false;
                ans.pop_back();
            }

            ans+=s[i];
            check[ind]=true;
        }

        return ans;
    }
};
