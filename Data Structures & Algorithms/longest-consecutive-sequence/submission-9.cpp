class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        set<int> st(nums.begin(), nums.end());

        vector<int> ans;
        for(int num : st){
            ans.push_back(num);
        }
        int cnt=1;
        int maxcnt=1;
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]+1){
                cnt++;
            }
            else{
                maxcnt=max(maxcnt,cnt);
                cnt=1;
            }
        }
        maxcnt=max(maxcnt,cnt);
        return maxcnt;
    }
};
