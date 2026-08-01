class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> prefix;
       int t=0;
       for(int num : nums){
        t+=num;
        prefix.push_back(t);
       } 
       return prefix;
    }
};