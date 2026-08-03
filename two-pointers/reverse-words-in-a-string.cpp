class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int start = 0;
        for(int end =0;end<s.size;end++){
            if(end!=n || s[end]==' '){
                reverse(s.begin()+start,s.end()+end);
                start = end +1;
            }
        }
        string ans ="";
        int i=0;
        while(i<n){
            while(i<s.size() && s[i]== ' ' ){
            i++;
        }
        while(i<s.size() && s[i]!=' '){
            ans += s[i];
            i++;
        }
        if(i==n) break;
        if(!ans.empty()) ans += " ";
        
        }
        
    return ans;
    }
};