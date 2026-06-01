// 1. Two Sum

#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    if (nums.empty() || (1 == nums.size() && target != nums[0]))
        return {-1, -1};

    std::unordered_map<int, int> uMp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (uMp.find(nums[i]) != uMp.end())
            return {uMp[nums[i]], i};

        uMp[target - nums[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    std::vector<int> nums, res;

    nums = {3, 3};
    res = {0, 1};
    (res == twoSum(nums, 6)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {3, 2, 4};
    res = {1, 2};
    (res == twoSum(nums, 6)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {2, 7, 11, 15};
    res = {0, 1};
    (res == twoSum(nums, 9)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    return 0;
}