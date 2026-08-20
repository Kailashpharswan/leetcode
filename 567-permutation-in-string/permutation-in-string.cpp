class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m){
            return false;
        }
        // sort(s1.begin(),s1.end());
        // for(int i=0;i<=m-n;i++){
        //     string substring =s2.substr(i,n);
        //     sort(substring.begin(),substring.end());
        //     if(s1==substring){
        //         return true;
        //     }
        // }
        // return false;
        /////now by sliding window
        vector<int> s1_freq(26,0);
        vector<int> s2_freq(26,0);
        for(char &ch: s1){
            s1_freq[ch-'a']++;
        }
        int r=0,l=0;
        while(r<m){
            s2_freq[s2[r]-'a']++;
            if(r-l+1 > n){
                s2_freq[s2[l]-'a']--;
                l++;
            }
            if(s1_freq==s2_freq){
                return true;
            }
            r++;
        }
         return false ;

    }
};