class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m;
        vector<int> v1;
        for(int i=0;i<nums1.size();i++){

            v1.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            v1.push_back(nums2[j]);;
        }
        sort(v1.begin(),v1.end());
        m=v1.size()/2;

        if(v1.size()%2==0){
            double m1=v1[m-1]+v1[m];
            return m1/2;
        }
        else 
            return v1[m];
        
        
    }
};
