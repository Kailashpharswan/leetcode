class Solution {
public:
    string minWindow(string s, string t) {
    //     int n=s.size();
    //     int m=t.size();
    //     unordered_map<char,int> mpp;
    //     int count=0,r=0,l=0;
    //     int minlen=INT_MAX;
    //     int starting_index=-1;
    //     for(int i=0;i<m;i++){
    //         mpp[t[i]]++;
    //     }
    //     while(r<n){
    //         if(mpp[s[r]] > 0){
    //             count++;
    //         }
    //         mpp[s[r]]--;
    //         while(count==m){
    //             if(r-l+1<minlen){
    //                 minlen=r-l+1;
    //                 starting_index=l;
    //             }
    //             mpp[s[l]]++;
    //             if(mpp[s[l]]>0){
    //                 count--;
    //             }
    //             l++;
    //         }
    //         r++;
    //     }
    //    if(starting_index == -1) {
    //         return "";
    //     }

    //     return s.substr(starting_index, minlen);
    int n=s.size();
    int m=t.size();
    unordered_map<char,int> mpp;
    int count=0,r=0,l=0;
    int s_index=-1;
    int minl=INT_MAX;
    for(int i=0;i<m;i++){
        mpp[t[i]]++;
    }
    while(r<n){
        if(mpp[s[r]]>0){
            count++;
        }
        mpp[s[r]]--;
        while(count==m){
            if(r-l+1<minl){
                minl=r-l+1;
                s_index=l;
            }
            mpp[s[l]]++;
            if(mpp[s[l]]>0){
                count--;
            }
            l++;
        }
        r++;
    }
    if(s_index==-1){
        return "";
    }
    return s.substr(s_index,minl);
    }
};