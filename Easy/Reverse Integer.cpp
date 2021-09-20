// https://leetcode.com/problems/reverse-integer

class Solution
{
public:
    int reverse(int x)
    {
        long long reversed = 0;
        int pop;

        // check if the input is large than limit
        if (x >= INT_MAX || x <= INT_MIN)
            return 0;

        while (x != 0)
        {
            pop = x % 10; // get the last number
            x /= 10;      // remove the last number

            reversed = (reversed * 10) + pop;
            if (reversed >= INT_MAX || reversed <= INT_MIN)
                return 0;
        }

        return reversed;
    }
};