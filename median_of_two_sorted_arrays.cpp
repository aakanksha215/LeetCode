#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> v;
        int i = 0, j = 0;
        double m;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] <= nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size())
        {
            v.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size())
        {
            v.push_back(nums2[j]);
            j++;
        }

        int mid = v.size() / 2;
        if (v.size() % 2 == 0)
        {
            double midVal = v[mid] + v[mid - 1];
            m = midVal / 2;
            return m;
        }
        m = v[mid];
        return m;
    }
};