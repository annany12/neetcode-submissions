class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int, int> mp;

for (int i = 0; i < nums.size(); i++) {
    int complement = t - nums[i];

    if (mp.count(complement))
        return {mp[complement], i};

    mp[nums[i]] = i;
    }
    }

};
