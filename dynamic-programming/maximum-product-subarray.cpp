class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,suff=1;
        int ans=INT_MIN;
        for(int i = 0;i<nums.size()-1;i++){
            if(pre==0) {
                pre = 1;
            }
            if(suff==0){
                suff=1;
            }
            pre *=nums[i];
            suff *=nums[nums.size()-i-1];

             n=max(pre,suff);
             ans = max(ans,n);
        }
       return ans;
    }
};