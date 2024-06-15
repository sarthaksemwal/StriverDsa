class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            if(nums[high]%2==0 || nums[high]==0){
                swap(nums[low],nums[high]);
            }
            if(nums[low]%2==0)low++;
            if(nums[high]%2==1)high--;
        }
        return nums;
    }
};