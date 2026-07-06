class Solution {
public:
    int reverse(int x) {
        int revN=0;
        while(x>0){
            int rem = x % 10;
            revN = (rev*10)+rem;
            n=n/10;
        }
        return 0;
    }
};