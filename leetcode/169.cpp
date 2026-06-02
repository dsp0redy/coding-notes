// 169. Majority Element

#include <iostream>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int> &nums)
{
    std::unordered_map<int, int> ump; // key = num, value = count of number
    int com = (nums.size() / 2);
    for (auto &it : nums)
    {
        if (ump.find(it) == ump.end())
            ump[it] = 1;
        else
            ump[it]++;

        if (ump[it] > com)
            return it;
    }
    // for (auto &[key, value] : ump)
    // {
    //     if (value > com)
    //         return key;
    // }

    return -1;
}

int main()
{
    std::vector<int> nums;

    nums = {2, 2, 1, 1, 1, 2, 2};
    (2 == majorityElement(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {3, 2, 3};
    (3 == majorityElement(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;
    return 0;
}