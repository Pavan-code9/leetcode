class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zerocnt=0;
        int left=0;
        int maxones=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zerocnt+=1;
            }
            while(zerocnt>k){
                if(nums[left]==0){
                    zerocnt-=1;
                }
                left+=1;
            }
            maxones=max(maxones,right-left+1);
        }
        return maxones;
    }
};