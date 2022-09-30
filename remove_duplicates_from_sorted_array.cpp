#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int n = nums.size();
        if (n == 1)
        {
            return 1;
        }
        int j = 0;
        int i = 0;
        while (i < n)
        {
            if (i == n - 1)
            {
                nums[j] = nums[i];
                j++;
                i++;
            }
            else if (nums[i] == nums[i + 1])
            {
                i++;
            }
            else
            {
                nums[j] = nums[i];
                j++;
                i++;
            }
        }
        return j;
    }
};