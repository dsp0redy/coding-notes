// 560. Subarray Sum Equals K

#include <iostream>
#include <vector>
#include <unordered_map>

int subarraySum(std::vector<int> &nums, int k)
{
    if (0 == nums.size())
        return 0;

    if (1 == nums.size() && nums[0] != k)
        return 0;

    int totalSubArr = 0;
    // for(int i=0;i<nums.size();i++){
    //     if(k == nums[i])
    //         totalSubArr++;

    //     int sum = nums[i];
    //     for(int j=i+1;j<nums.size();j++){
    //         sum += nums[j];
    //         if(k == sum)
    //             totalSubArr++;
    //     }
    // }
    int curSum = 0;
    std::unordered_map<int, int> uMp; // key = curSum,value = count
    uMp[0] = 1;
    for (auto &it : nums)
    {
        curSum += it;
        if (uMp.find(curSum - k) != uMp.end())
            totalSubArr += uMp[curSum - k];

        uMp[curSum]++;
    }
    return totalSubArr;
}

int main()
{
    std::vector<int> nums;

    nums = {1, 1, 1};
    (2 == subarraySum(nums, 2)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    nums = {1, 2, 3};
    (2 == subarraySum(nums, 3)) ? std::cout << true << std::endl : std::cout << false << std::endl;
}