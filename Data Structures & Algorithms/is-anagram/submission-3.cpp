class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp1;
        map<char,int>mpp2;
        for(char c:s){
            mpp1[c]++;
        }
        for(char l:t){
            mpp2[l]++;
        }
        return mpp1==mpp2;
    }
};
