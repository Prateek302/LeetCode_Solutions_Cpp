class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=INT_MIN;
            }
        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]>INT_MIN){
                res.push_back(nums[j]);
            }
        }
        nums.clear();
        nums=res;
        return nums.size();
    }
};
