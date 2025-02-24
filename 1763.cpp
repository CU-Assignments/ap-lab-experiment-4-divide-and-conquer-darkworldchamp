class Solution {
public:
    bool check(string s){
        for(int i=0 ;i<s.size();i++){
            char c = s[i];
            if(c<=90) c+=32;
            else c-=32;
            if(s.find(c) == string::npos)return false;
        }
        return true;
    }
    string longestNiceSubstring(string s) {
         string ans = "";
        for(int i=0;i<s.size();i++){
            string res = "";
            res += s[i];
            for(int j = i+1;j<s.size();j++){
                res += s[j];
                if(check(res) and res.size()>ans.size()) ans = res;
            }
        }
        return ans;
    }
};
