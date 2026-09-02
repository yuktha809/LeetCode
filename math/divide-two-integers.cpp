class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend=INT_MIN && divisor<=0){
            return INT_MAX;
        }
        if(dividend == divisor) return 1;
        if(dividend>0 && (divisor==1)) return dividend;
        bool neg=(dividend<0)^(divisor<0);
        long long a = dividend;
        long long b = divisor;
        a = abs(a);
        b = abs(b);
        long long q;
        while(a>=b){
            long long temp=b;
            long lonng count =1;
            while((temp<<1)<=a){
                temp<<1;
                count<<1;
           }
            a =a-temp;
            q=q+count;
        }
        if(negative){
            q = -q;
        }
    }
};