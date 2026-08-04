class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        if(strs.empty()) return "";
        string frst = strs[0];
        string last = strs[strs.size()-1];
        int minStr = min(frst.size(),last.size());
        string ans ="";
        for(int i =0;i<minStr;i++){
            if(frst[i]!=last[i]){
                break;
            }
            ans += frst[i];
        }
        return ans;
        
    }
};