class Solution {
public:
    vector<int> twoSum(vector<int>& sum, int t) {
        for (int i = 0; i < sum.size(); i++) {
            for (int j = i + 1; j < sum.size(); j++) {
                if (sum[i] + sum[j] == t) {
                    return {i, j};
                }
            }
        }
        return {0, 0};
    }

};
