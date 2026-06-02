// 53. Maximum Subarray

#include <iostream>
#include <vector>
#include <algorithm>

int maxSubArray(std::vector<int> &nums)
{
    int curSum = nums[0], maxSumSoFar = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        curSum = std::max(nums[i], curSum + nums[i]);
        maxSumSoFar = std::max(maxSumSoFar, curSum);
    }
    return maxSumSoFar;
}

int main()
{
    std::vector<int> nums{};

    nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    (6 == maxSubArray(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;
    return 0;
}