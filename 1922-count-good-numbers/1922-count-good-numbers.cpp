class Solution {
private:
    long long MOD = 1e9 + 7;
    long long power(long long base, long long exp) {
        long long ans = 1;
        base = base % MOD;       
        while (exp > 0) {
            if (exp % 2 == 1) {
                ans = (ans * base) % MOD;
            }
            base = (base * base) % MOD;
            exp /= 2;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;       
        long long totalEvenWays = power(5, evenPositions);
        long long totalOddWays = power(4, oddPositions);
        
        return (totalEvenWays * totalOddWays) % MOD;
    }
};