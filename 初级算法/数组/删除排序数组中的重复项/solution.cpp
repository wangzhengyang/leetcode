#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    static int removeDuplicates(vector<int>& nums)
    {
        if(nums.size() == 0){
            return 0;
        }

        int j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[j] != nums[i]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j;
    }
};

int main()
{
    std::vector<int> test1{1};
    std::cout << "size :" << Solution::removeDuplicates(test1) << std::endl;
    std::cout << "data :";
    for(int i = 0; i < test1.size(); i++){
        std::cout << " " << test1[i];
    }
    std::cout << std::endl;
    std::vector<int> test2{1, 2, 3};
    std::cout << "size :" << Solution::removeDuplicates(test2) << std::endl;
    std::cout << "data :";
    for(int i = 0; i < test2.size(); i++){
        std::cout << " " << test2[i];
    }
    std::cout << std::endl;
    std::vector<int> test3{1, 1, 2}; 
    std::cout << "size :" << Solution::removeDuplicates(test3) << std::endl;
    std::cout << "data :";
    for(int i = 0; i < test3.size(); i++){
        std::cout << " " << test3[i];
    }
    std::cout << std::endl;
    std::vector<int> test4{0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; 
    std::cout << "size :" << Solution::removeDuplicates(test4) << std::endl;
    std::cout << "data :";
    for(int i = 0; i < test4.size(); i++){
        std::cout << " " << test4[i];
    }
    std::cout << std::endl;
    return 0;
}

