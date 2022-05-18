#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        std::set<int> record;
        for (int i = 0; i < nums.size(); i++)
        {
            int left = target - nums[i];
            if (record.find(left) == record.end())
            {
                record.insert(nums[i]);
                continue;
            }

            int j = 0;
            for (; j < i; j++)
            {
                if (nums[j] == left)
                {
                    break;
                }
            }

            return { j, i };
        }

        return std::vector<int>();
    }
};

int main()
{
    Solution s;
    std::vector<int> test1{ 2, 7, 11, 15 };
    auto result = s.twoSum(test1, 9);
    std::cout << "result:";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << " " << result[i];
    }
    std::cout << std::endl;

    std::vector<int> test2{ 3, 2, 4 };
    result = s.twoSum(test2, 6);
    std::cout << "result:";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << " " << result[i];
    }
    std::cout << std::endl;

    std::vector<int> test3{ 3, 3 };
    result = s.twoSum(test3, 6);
    std::cout << "result:";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << " " << result[i];
    }
    std::cout << std::endl;
    return 0;
}