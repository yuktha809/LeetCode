class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev=0;
        int dup=x;
        while(x > 0){
            int rem = x%10;
            rev = (rev*10)+rem;
            x=x/10;
        }
        if(dup == rev){
            return true;
        }
        else{
            return false;
        }
    }
};