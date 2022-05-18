#include <vector>
#include <set>
#include <iostream>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> s;
        for(int i = 0; i < nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }

            s.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    Solution s;
    std::vector<int> test1{1, 2, 3, 1};
    std::cout << "result is " << s.containsDuplicate(test1) << std::endl;
    std::vector<int> test2{1, 2, 3, 4};
    std::cout << "result is " << s.containsDuplicate(test2) << std::endl;
    std::vector<int> test3{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    std::cout << "result is " << s.containsDuplicate(test3) << std::endl;
    return 0;
}

