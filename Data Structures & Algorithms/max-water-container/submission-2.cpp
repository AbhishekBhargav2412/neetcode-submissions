class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=1;
        int minheight=0;
        int n=heights.size();
        int maxarea=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                minheight=min(heights[i],heights[j]);
                area=minheight*(j-i);
                maxarea=max(area,maxarea);
            }
        }
        return maxarea;
    }
};
