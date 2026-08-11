class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int longest=0;
        set<char> st;
        for(int right=0;right<s.size();right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left+=1;
            }
            st.insert(s[right]);
            longest=max(longest,right-left+1);
        }
        return longest;
    }
};