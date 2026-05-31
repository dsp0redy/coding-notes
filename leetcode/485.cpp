// 485. Max Consecutive Ones

#include <iostream>
#include <vector>

int findMaxConsecutiveOnes(std::vector<int> &nums)
{
    if (nums.empty() || (1 == nums.size() && 0 == nums[0]))
        return 0;

    if ((1 == nums.size() && 1 == nums[0]))
        return 1;

    int res = 0;
    int curRes = 0;
    for (auto &it : nums)
    {
        if (1 == it)
            curRes++;
        else
        {
            res = std::max(res, curRes);
            curRes = 0;
        }
    }
    res = std::max(res, curRes);
    return res;
}

int main()
{
    std::vector<int> nums;

    nums = {1, 0, 1, 1, 0, 1};
    (2 == findMaxConsecutiveOnes(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {1, 1, 0, 1, 1, 1};
    (3 == findMaxConsecutiveOnes(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    return 0;
}