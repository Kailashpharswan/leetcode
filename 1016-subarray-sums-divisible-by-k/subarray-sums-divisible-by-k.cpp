class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int ans=0;
        freq[0]=1;
        int prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int rem=((prefix%k)+k)%k;
            ans+=freq[rem];
        
            freq[rem]++;
        }
        return ans;
    }
};