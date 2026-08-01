class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int result=0;
        int prefix=0;
        for(int num:nums){
            prefix+=num;
            if(mp.find(prefix-k)!=mp.end()){
                result+=mp[prefix-k];
            }
            mp[prefix]++;
        }
        return result;
    }
};