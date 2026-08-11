class Solution {
    int kadaneMax(vector<int>& nums,int n){
        int sum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<n;i++){
            sum= max(sum+nums[i],nums[i]);
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
    int kadaneMin(vector<int>& nums,int n){
        int sum=nums[0];
        int minSum=nums[0];
        for(int i=1;i<n;i++){
            sum= min(sum+nums[i],nums[i]);
            minSum=min(minSum,sum);
        }
        return minSum;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int t=0;
        for(int i=0;i<n;i++){
            t+=nums[i];
        }
        int minSum=kadaneMin(nums,n);
        int maxSum=kadaneMax(nums,n);
        int circular_sum=t-minSum;
        if(maxSum>0){
            return max(maxSum,circular_sum);
        }
        return maxSum;

    }
};