class Solution {
public:
    int minMoves2(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int n= nums.size();
     int count =0;
     int max = nums[ n/2];
     for(int i=0;i<n;i++){
        if(nums[i]!=max){
            int ans = abs(max-nums[i]);
            count = count+ans;
        }
     }
     return count;
    }
};