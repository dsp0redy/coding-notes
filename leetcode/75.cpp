// 75. Sort Colors

#include <iostream>
#include <vector>
#include <unordered_map>

void sortColors(std::vector<int> &nums)
{
    int ind = 0, zeroInd = 0, twoInd = nums.size() - 1;
    while (ind <= twoInd)
    {
        if (nums[ind] == 2)
        {
            std::swap(nums[ind], nums[twoInd]);
            twoInd--;
        }
        if (nums[ind] == 0)
        {
            std::swap(nums[ind], nums[zeroInd]);
            zeroInd++;
            ind++;
        }
        else
            ind++;
    }
}

int main()
{
    std::vector<int> nums, res;

    nums = {2, 0, 2, 1, 1, 0};
    res = {0, 0, 1, 1, 2, 2};
    sortColors(nums);
    (res == nums) ? std::cout << true << std::endl : std::cout << false << std::endl;

    return 0;
}