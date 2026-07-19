class Solution {
public:
    string smallestSubsequence(string s) {
        for(int i :s){
            for(int j=i;j<len(s);j++){
                 if(s[i]!=s[j])
                 return s[i];
            }
           
        }
        
    }
};