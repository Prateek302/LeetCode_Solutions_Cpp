class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //first approach O(n)

        int n=nums.size();
        vector<pair<int,int>>temp;

        for(int i=0;i<n;i++){
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(),temp.end());
        int low=0;
        int high=n-1;
        while(low<high){
            if((temp[low].first+temp[high].first)==target){
                return {temp[low].second,temp[high].second};
            } 
            else if((temp[low].first+temp[high].first)<target){
                low++;
            }
            else{
                high--;
            }
            }
            return {};
    }
};
