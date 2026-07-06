class Solution {
public:
    int reverse(int x) {
        
        int revN=0;
        while(x>0){
            int rem = x % 10;
            x = x/10;
           if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;

            
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;
            revN = (revN*10)+rem;
            
        }
        return revN;
    }
};