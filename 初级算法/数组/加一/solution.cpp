#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int carry = 1;
        std::list<int> result;
        for (int pos = digits.size() - 1; pos >= 0; pos--)
        {
            digits[pos] += carry;
            if (digits[pos] == 10)
            {
                result.push_front(0);
                continue;
            }
            carry = 0;
            result.push_front(digits[pos]);
        }
        if (carry)
        {
            result.push_front(1);
        }
        return std::vector<int>(result.begin(), result.end());
    }
};

int main()
{
    Solution s;
    std::vector<int> test1{1, 2, 3};
    auto result = s.plusOne(test1);
    std::cout << "result:";
    for(int i = 0; i < result.size(); i++){
        std::cout << " " << result[i];
    }
    std::cout << std::endl;

    std::vector<int> test2{4, 3, 2, 1};
    result = s.plusOne(test2);
    std::cout << "result:";
    for(int i = 0; i < result.size(); i++){
        std::cout << " " << result[i];
    }
    std::cout << std::endl;

    std::vector<int> test3{0};
    result = s.plusOne(test3);
    std::cout << "result:";
    for(int i = 0; i < result.size(); i++){
        std::cout << " " << result[i];
    }
    std::cout << std::endl;

    std::vector<int> test4{9};
    result = s.plusOne(test4);
    std::cout << "result:";
    for(int i = 0; i < result.size(); i++){
        std::cout << " " << result[i];
    }
    std::cout << std::endl;
    return 0;
}