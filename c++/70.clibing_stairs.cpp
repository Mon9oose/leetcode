class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2 || n == 3) return n;

        int prev1 = 1;
        int prev2 = 2;
        int num = 3;
        int count = prev1 + prev2;
        while(num != n)
        {
            num += 1;
            prev1 = prev2;
            prev2 = count;
            count = prev1 + prev2;
        }
        return count;
    }
};