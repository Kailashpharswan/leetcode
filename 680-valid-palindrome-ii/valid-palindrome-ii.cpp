class Solution {
    bool check(string &s,int right, int left){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true ;
    }
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return (check(s,right,left+1)||check(s,right-1,left));
            }
            left++;
            right--;
            

    }
    return true;
    }
};