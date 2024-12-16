class Solution {
public:
int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MIN && divisor == 1) return INT_MIN;

        bool negative = (dividend < 0) ^ (divisor < 0);

        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        int quotient = 0;

        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor, multiple = 1;
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }
            absDividend -= tempDivisor;
            quotient += multiple;
        }

        return negative ? -quotient : quotient;
    }
      
    
};