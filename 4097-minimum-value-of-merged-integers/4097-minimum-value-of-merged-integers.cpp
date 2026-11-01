class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        
         vector<int>p;
        for(int i=0;i<nums.size()-1;i =i+2){
            int power = 1;
        int temp = nums[i+1];
            while(temp>0){
                power *= 10;
                temp = temp/10;
            }
            int ans = nums[i]*power+nums[i+1];
           
            p.push_back(ans);
        }
        int minel = p[0];
        for(int i=1;i<p.size();i++){
            if(minel>p[i]){
              minel = p[i];
            }
           
        }
         return minel;
        
    }
};