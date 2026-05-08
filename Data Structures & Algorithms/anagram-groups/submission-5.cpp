class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mpp;
        for(string s:strs){
            string orgi=s;
            sort(s.begin(),s.end());
            mpp[s].push_back(orgi);
        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
