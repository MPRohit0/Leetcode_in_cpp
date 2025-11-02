#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; nums.size()>i;i++){
            ans ^= nums[i];
        }
        return ans;
    }
};