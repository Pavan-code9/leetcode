class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n,-1);
        long long wsize= 2LL*k+1;
        if(wsize>n){
            return ans;
        }
        long long sum=0;
        for(int i=0;i<wsize;i++){
            sum+=nums[i];
        }
        int pos=k;
        ans[pos]=sum/wsize;
        for(int right=wsize;right<n;right++){
            sum+=nums[right];
            sum-=nums[right-wsize];
            pos++;
            ans[pos]=sum/wsize;
        }
        return ans;
    }
};