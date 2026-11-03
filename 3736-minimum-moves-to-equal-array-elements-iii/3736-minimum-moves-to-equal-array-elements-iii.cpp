class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int max = nums[n-1];
        int count =0;  
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=max){
                int an = max - nums[i];
                count = count +an;
            }
        }
        return count;
    }
};