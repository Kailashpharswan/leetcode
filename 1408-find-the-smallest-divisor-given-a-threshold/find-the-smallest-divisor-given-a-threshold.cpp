class Solution {
    // int findmin(vector<int>& nums){
    //     int mini=INT_MAX;
    //     for(int i=0;i<nums.size();i++){
    //         mini=min(mini,nums[i]);
    //     }
    //     return mini;
    // }
    int findmax(vector<int>& nums){
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
    bool possible(vector<int>& nums,int threshold,int divisor){
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=ceil((double)nums[i]/(double)divisor);
        }
        return (ans<=threshold);
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=findmax(nums);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,threshold,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};