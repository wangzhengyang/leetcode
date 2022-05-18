#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    void rotate(vector<int>& nums, int k){
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }

    void reverse(vector<int>& nums, int start, int end)
    {
        for(; start < end; start++, end--){
            int temp = nums[start] ^ nums[end];
            nums[start] = temp ^ nums[start];
            nums[end] = temp ^ nums[start];
        }
    }
};

int main()
{
    Solution s;
    std::vector<int> test1{1, 2, 3, 4, 5, 6, 7};
    s.rotate(test1, 3);
    std::cout << "result:";
    for(int i = 0; i < test1.size(); i++){
        std::cout << " " << test1[i];
    }
    std::cout << std::endl;

    std::vector<int> test2{-1, -100, 3, 99};
    s.rotate(test2, 2);
    std::cout << "result:";
    for(int i = 0; i < test2.size(); i++){
        std::cout << " " << test2[i];
    }
    std::cout << std::endl;
    return 0;
}

