class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>A{-1,-1};
        int low=0;
        int high=nums.size()-1;
        if(nums.size()==0){
            return A;
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                high=mid;
            }
            else {
                low=mid+1;
            }
        }
            if(nums[low]!=target){
                return A;
            }
            A[0]=low;
            high=nums.size();
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]>target){
                    high=mid;
                }
                else{
                    low=mid+1;
                }
            }
            A[1]=low-1;
            return A;
    }
};
