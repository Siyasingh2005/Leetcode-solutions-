// Problem: https://leetcode.com/problems/missing-number/description
// Language: C++
// Author : Siya Singh 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
    int n = nums.size();
    return n * (n + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
}
    
};
