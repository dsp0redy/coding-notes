// 179. Largest Number

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string largestNumber(std::vector<int> &nums)
{
    if (0 == nums.size())
        return "";

    if (1 == nums.size())
        return std::to_string(nums[0]);

    std::sort(nums.begin(), nums.end(), [](auto &a, auto &b)
              { return std::to_string(a) + std::to_string(b) >  std::to_string(b) + std::to_string(a); });

    if(0 == nums[0])
        return "0";

    std::string lar_num_str = "";
    for (auto &it : nums)
    {
        lar_num_str += std::to_string(it);
    }
    
    return lar_num_str;
}

int main()
{
    std::vector<int> nums;

    nums = {0,0};
    ("0" == largestNumber(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {3, 30, 34, 5, 9};
    ("9534330" == largestNumber(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {10, 2, 9, 39, 17};
    ("93921710" == largestNumber(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {10, 2};
    ("210" == largestNumber(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {700000000, 500000000};
    ("700000000500000000" == largestNumber(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    return 0;
}