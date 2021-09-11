#include <bits/stdc++.h>
using namespace std;

//  https://leetcode.com/problems/two-sum/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // O(n^2)
        vector<int> arr(2);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                // compare the two nums that add up to target
                if (nums[i] + nums[j] == target)
                {
                    arr[0] = i;
                    arr[1] = j;
                }
            }
        }
        return arr;
    }
};
