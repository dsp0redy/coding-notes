// 1752. Check if Array Is Sorted and Rotated

#include <iostream>
#include <vector>

bool check(std::vector<int> &nums)
{
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
            count++;
    }
    if (nums[0] < nums[nums.size() - 1])
        count++;

    return (count <= 1);
}

int main()
{
    std::vector<int> nums;

    nums = {3,4,5,1,2};
    (true == check(nums)) ? std::cout << true << std::endl : std::cout << false << std::endl;
    
    return 0;
}