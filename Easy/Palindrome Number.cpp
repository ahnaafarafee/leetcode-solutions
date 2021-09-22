class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long reversed = 0;
        int pop;

        if (x == 0)
            return true;
        
        if (x < 0 || x % 10 == 0)
            return false;

        while (x > reversed)
        {
            // get the last number
            pop = x % 10;
            // remove the last number
            x /= 10;

            reversed = (reversed * 10) + pop;
        }

        if (x == reversed || x == reversed / 10)
            return true;
        else
            return false;           
        
    }
};
