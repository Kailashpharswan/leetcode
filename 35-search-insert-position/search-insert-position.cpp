class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    //  int low=0;
    //  int high=nums.size()-1;
    //  while(low<=high){
    //     int mid=low+(high-low)/2;
    //     if(nums[mid]==target){
    //         return mid;
    //     }
    //     else if(nums[mid]<target){
    //         low=mid+1;
    //     }
    //     else{
    //         high=mid-1;
    //     }
    //  }
    //  return low;   
    int l=0;
    int h=nums.size()-1;
    int ans=nums.size();
    while(l<=h){
        int mid= l+(h-l)/2;
        if(nums[mid]>=target){
            ans=mid;
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
    }
};