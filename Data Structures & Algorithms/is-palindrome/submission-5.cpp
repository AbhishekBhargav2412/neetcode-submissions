class Solution {
public:
    bool isPalindrome(string s) {
        string req="";
        for(char c:s){
            if(isalnum(c)){
                req+=tolower(c);
            }
        }
        int left=0;
        int n=req.length();
        int right=n-1;
        while(left<=right){
            if(req[left]!=req[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
