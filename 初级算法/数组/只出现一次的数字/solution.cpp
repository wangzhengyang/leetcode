#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        int value = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            value = value ^ nums[i];
        }

        return value;
    }
};

int main()
{
    std::vector<int> test1{ 2, 2, 1 };
    Solution s;
    std::cout << "value is " << s.singleNumber(test1) << std::endl;
    std::vector<int> test2{ 4, 1, 2, 1, 2 };
    std::cout << "value is " << s.singleNumber(test2) << std::endl;
    return 0;
}