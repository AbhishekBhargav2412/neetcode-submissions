class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        vector<int>ans;
        for(int num:nums){
            mpp[num]++;
        }
        vector<pair<int,int>>p;
        for(auto it:mpp){
            p.push_back({it.second,it.first});
        }
        sort(p.rbegin(),p.rend());
        for(int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }
        return ans;
    }
};
