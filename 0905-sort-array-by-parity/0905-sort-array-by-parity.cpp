class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>temp = nums;
        int idx =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[idx] = nums[i];
                idx++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(temp[i]%2 != 0){
                nums[idx] = temp[i];
                idx++;
            }
        }
        return nums;
    }
};