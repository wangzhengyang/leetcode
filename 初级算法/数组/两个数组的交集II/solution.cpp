#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> result;
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        for(int pos1 = 0, pos2 = 0; pos1 < nums1.size() && pos2 < nums2.size();){
            if(nums1[pos1] == nums2[pos2]){
                result.push_back(nums1[pos1]);
                pos1++;
                pos2++;
            }else if(nums1[pos1] < nums2[pos2]){
                pos1++;
            }else{
                pos2++;
            }
        }

        return result;
    }
};

int main()
{
    std::vector<int> test1_1{1, 2, 2, 1};
    std::vector<int> test1_2{2, 2};
    Solution s;
    auto result = s.intersect(test1_1, test1_2);
    std::cout << "result:";
    for(int i = 0; i  < result.size(); i++){
        std::cout << " " << result[i]; 
    }
    std::cout << std::endl;
    std::vector<int> test2_1{4, 9, 5};
    std::vector<int> test2_2{9, 4, 9, 8, 4};
    result = s.intersect(test2_1, test2_2);
    std::cout << "result:";
    for(int i = 0; i  < result.size(); i++){
        std::cout << " " << result[i]; 
    }
    std::cout << std::endl;
}