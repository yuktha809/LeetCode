class Solution {
public:
    int reverse(int x) {
        int revN=0;
        while(x>0){
            int rem = x % 10;
            revN = (revN*10)+rem;
            x = x/10;
        }
        return 0;
    }
};