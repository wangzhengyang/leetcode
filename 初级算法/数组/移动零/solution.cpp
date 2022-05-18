#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_pos = 0;
        for(; zero_pos < nums.size(); zero_pos++){
            if(nums[zero_pos] == 0){
                break;
            }
        }

        for(int i = zero_pos + 1; i < nums.size(); i++){
            if(nums[i] == 0){
                continue;
            }

            nums[zero_pos] = nums[i];
            nums[i] = 0;
            zero_pos++;
        }
    }
};

int main()
{
    Solution s;
    std::vector<int> test1{0, 1, 0, 3, 12};
    s.moveZeroes(test1);
    std::cout << "result:";
    for(int i = 0; i < test1.size(); i++){
        std::cout << " " << test1[i];
    }
    std::cout << std::endl;

    std::vector<int> test2{0};
    s.moveZeroes(test2);
    std::cout << "result:";
    for(int i = 0; i < test2.size(); i++){
        std::cout << " " << test2[i];
    }
    std::cout << std::endl;
    return 0;
}