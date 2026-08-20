class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.size();
        int maxlen=0;
        for(int unique =1;unique<=26;unique++){
            int r=0,l=0;
                    int unique_counter=0;
        int countAtLeastk=0;

            unordered_map<char,int> mpp;
            while(r<n){
                if(mpp[s[r]]==0){
                    unique_counter++;
                }
                mpp[s[r]]++;
                if(mpp[s[r]]==k){
                    countAtLeastk++;
                }
                while(unique_counter>unique){
                    if(mpp[s[l]]==k){
                        countAtLeastk--;
                    }
                    mpp[s[l]]--;
                    if(mpp[s[l]]==0){
                        unique_counter--;
                        }
                        l++;
                }
                if(unique_counter==unique && countAtLeastk ==unique){
                maxlen=max(r-l+1,maxlen);
            }

              r++;  
            }
            
            
        }
        return maxlen;
    }
        
    
};