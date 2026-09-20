class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int idx =0;
        int j =1;
        vector<int>temp = nums;
        for(int i=0;i<temp.size();i++){
            if(temp[i]>=0){
                nums[idx] = temp[i];
                idx = idx+2;

            }
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]<0){
                nums[j] = temp[i];
                j = j+2;
            }
        }
        return nums;
    }
};