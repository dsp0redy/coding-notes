#include <iostream>
#include <vector>
#include <algorithm>

int minElement(std::vector<int> &nums)
{
    int minEle = INT_MAX;
    for (auto &it : nums)
    {
        if (it < 10)
            minEle = std::min(it, minEle);
        else
        {
            int sum = 0;
            while (it)
            {
                sum += it % 10;
                it = it / 10;
            }
            minEle = std::min(sum, minEle);
        }
    }
    return minEle;
}

int main()
{

    std::vector<int> nums;

    nums = {10, 12, 13, 14};
    (1 == minElement(nums)) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    nums = {1,2,3,4};
    (1 == minElement(nums)) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    nums = {999,19,199};
    (10 == minElement(nums)) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    return 0;
}
