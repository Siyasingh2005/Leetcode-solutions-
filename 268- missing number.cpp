// Problem: https://leetcode.com/problems/missing-number/
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
    int n = nums.size();
    return n * (n + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
}
    
};
