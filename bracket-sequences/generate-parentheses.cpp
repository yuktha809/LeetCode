class Solution {
public:
    vector solve(int open,int close,int n,string s,vector<string>& ans){
        if(s.lenght()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            solve(open+1,close,n,s+'(',ans);
        }
        if(close<open){
            solve(open,close+1,s+')',ans)
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0,0,n,"",ans);
        return ans;
    }
};