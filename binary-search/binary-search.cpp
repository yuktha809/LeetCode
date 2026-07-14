class Solution {
public:
    int binraySearch(vector& nums,int low,int high,int target){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) return binraySearch(nums,mid+1,high,target);
        else return binraySearch(nums,low,mid-1,target);
    }
    int search(vector<int>& nums, int target) {
        
        
    }
};