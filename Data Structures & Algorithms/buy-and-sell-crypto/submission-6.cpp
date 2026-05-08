class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int pro=0;
        int maxpro=0;
        int mini=prices[0];
        for(int i=1;i<n;i++){
            mini=min(mini,prices[i]);
            pro=prices[i]-mini;
            maxpro=max(maxpro,pro);
        }
        return maxpro;
    }
};
