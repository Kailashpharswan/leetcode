class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxA=0;
        int area;
        while(l<r){
            area=min(height[l],height[r])*(r-l);
             maxA=max(area,maxA);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }


        }
        return maxA;

    }
};