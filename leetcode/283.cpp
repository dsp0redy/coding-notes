// 283. Move Zeroes

#include <iostream>
#include <vector>

void moveZeroes(std::vector<int> &nums)
{
    if (0 == nums.size() || 1 == nums.size())
        return;

    int zeroCount = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (0 == nums[i])
        {
            zeroCount++;
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    for (int i = 0; i < zeroCount; i++)
        nums.push_back(0);
}

int main()
{
    std::vector<int> nums, res;

    nums = {0, 0, 1};
    res = {1, 0, 0};
    moveZeroes(nums);
    (res == nums) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {0, 1, 0, 3, 12};
    res = {1, 3, 12, 0, 0};
    moveZeroes(nums);
    (res == nums) ? std::cout << true << std::endl : std::cout << false << std::endl;

    return 0;
}