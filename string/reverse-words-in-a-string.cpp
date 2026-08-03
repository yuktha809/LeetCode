class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        int n = s.size();
        int i = 0;
        string word = "";
        while(i<n){
            while(i<n && s[i]== ' ' ){
                i++;

            }
            while(i<n && s[i]!= ' '){
                word += s[i];
                i++;
            }
            
            if(!word.empty()){
                words.push_back(word);}
        }
       
    string result = " ";
    for(int i = words.size()-1;i>=0;i--){
        result += words[i];
        if(i!=0) result += " ";
    }
        return result;
    }
};