class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 1;
        if(nums.size()==0) return 0;
        for(int i =0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        for (int num : nums) {

            // Start only if num is the first element
            if (st.find(num - 1) == st.end()) {

                int current = num;
                int length = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};