class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        int idx = 0;

        while(mp[0]--) nums[idx++] = 0;
        while(mp[1]--) nums[idx++] = 1;
        while(mp[2]--) nums[idx++] = 2;
    }
};