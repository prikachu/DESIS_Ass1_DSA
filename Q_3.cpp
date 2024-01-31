#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int ans = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                int temp = nums[i] + nums[j] + nums[k];
                if (temp - target == 0)
                    return target;
                if (abs(temp - target) < abs(target - ans))
                    ans = temp;
                if (temp < target)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};