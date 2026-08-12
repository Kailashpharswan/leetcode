class Solution {
    int kadaneMax(vector<int>& nums,int n){
        int sum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<n;i++){
            sum = max(sum+nums[i],nums[i]);
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
        int kadaneMin(vector<int>& nums,int n){
        int sum=nums[0];
        int minSum=nums[0];
        for(int i=1;i<n;i++){
            sum = min(sum+nums[i],nums[i]);
            minSum = min(minSum,sum);
        }
        return minSum;
    }
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxSum=kadaneMax(nums,n);
        int minSum=kadaneMin(nums,n);
        int absolute=max(abs(minSum),abs(maxSum));
        return absolute;
    }
};