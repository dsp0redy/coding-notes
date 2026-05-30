// 189. Rotate Array

#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int> &nums, int k)
{
    if (0 == nums.size() || 1 == nums.size() || k == nums.size())
        return;

    k %= nums.size();
    std::reverse(nums.begin(), (nums.begin() + nums.size() - k));
    std::reverse(nums.begin() + (nums.size() - k), nums.end());
    std::reverse(nums.begin(), nums.end());
}

int main()
{
    std::vector<int> nums, res;

    nums = {-1, -100, 3, 99};
    res = {3, 99, -1, -100};
    rotate(nums, 2);
    (res == nums) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {1, 2, 3, 4, 5, 6, 7};
    res = {5, 6, 7, 1, 2, 3, 4};
    rotate(nums, 3);
    (res == nums) ? std::cout << true << std::endl : std::cout << false << std::endl;
}