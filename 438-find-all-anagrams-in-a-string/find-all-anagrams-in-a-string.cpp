class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n=s.size();
        int m=p.size();
        map<char,int> mp1,mp2;
        for(char ch:p){
            mp1[ch]++;
        }
        for(int i=0;i<m;i++){
            mp2[s[i]]++;
        }
        if(mp1==mp2){
            ans.push_back(0);
        }
        for(int i=m;i<n;i++){
            mp2[s[i]]++;
            mp2[s[i-m]]--;
            if(mp2[s[i-m]]==0){
                mp2.erase(s[i-m]);
            }if(mp1==mp2){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};