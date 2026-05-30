// 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
#include <unordered_set>

int removeDuplicates(std::vector<int> &nums)
{
    if (0 == nums.size())
        return 0;

    if (1 == nums.size())
        return 1;

    std::unordered_set<int> us;
    for (int i = 0; i < nums.size(); i++)
    {
        if (us.find(nums[i]) != us.end())
        {
            nums.erase(nums.begin() + i);
            i--;
        }
        else
            us.insert(nums[i]);
    }
    return nums.size();
}

int main()
{
    std::vector<int> nums;

    nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    (5 == removeDuplicates(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {1, 1, 2};
    (2 == removeDuplicates(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;
    return 0;
}