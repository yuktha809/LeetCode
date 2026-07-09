class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longest = 1;
     for(int num :nums){
        if(st.find(num-1) == st.end()){
            int current = num;
            int lenght=1;
            while(st.find(current+1)!=st.end()){
                current ++;
                lenght++;
            }
            longest=max(longest,lenght);
        }
     }
        return longest;
    }
};