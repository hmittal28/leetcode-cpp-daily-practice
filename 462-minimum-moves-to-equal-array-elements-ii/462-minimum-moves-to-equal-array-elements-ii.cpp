class Solution {
public:
    int minMoves2(vector<int>& nums) {
        vector<int>::iterator mid = nums.begin() + nums.size() / 2;
        nth_element(nums.begin(), mid, nums.end());
        int ttl = 0, median = nums[nums.size() / 2];
        for (auto num : nums) ttl += abs(median - num);
        return ttl;
    }
};