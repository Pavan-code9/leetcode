class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n);
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int l=0;
        for(int i=0;i<n;i++){
            int r=total-l-nums[i];
            arr[i]=abs(l-r);
            l+=nums[i];
        }
        return arr;
    }
};