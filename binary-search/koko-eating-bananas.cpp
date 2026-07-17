class Solution {
public:
    int countTotalHour(vector<int>& piles,int speed){
        int totalH=0;
        for(int i: piles){
            totalH += ceil((double)i/speed);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile = *max_element(piles.begin(),piles.end());
        int low =1,high = maxpile;
        int ans = INT_MAX;
       
        while(low<=high){
            int mid = (low+high)/2;
             int time=countTotalHour(piles,mid);
            if(time>=h){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};