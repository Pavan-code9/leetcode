class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        int lb=low;
        low=0,high=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        int ub=low;
        if(ub==lb) return {-1,-1};
        else return {lb,ub-1};
    }
};