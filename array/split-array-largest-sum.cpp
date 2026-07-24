class Solution {
public:
    int numPartitions(vector<int>& nums,int maxSum ){
        int partition=1;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] + sum <= maxSum){
                nums[i] +=sum;
            }
            else{
                partition++;
                sum = nums[i];

            }
        }
    return partition;
    }
    int splitArray(vector<int>& nums, int k) {
       
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        for(int i =low;i<=high;i++){
            if(numPartitions(nums,i)==k){
                return i;
            }
        }
        return low;
    }
};