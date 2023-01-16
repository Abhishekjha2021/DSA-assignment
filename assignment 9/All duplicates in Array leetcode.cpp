class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>temp(1000);
        vector<int>Ans;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]>1){
                Ans.push_back(i);
            }
        }
        return Ans;
    }
};
