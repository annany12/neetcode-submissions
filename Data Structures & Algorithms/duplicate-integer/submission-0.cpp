class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int c =0;
        for(auto x : nums){
            m[x]++;
        }
        for(auto p : m){
            if( p.second > 1){
                return true;
            }

        }
        return false;
    }
};