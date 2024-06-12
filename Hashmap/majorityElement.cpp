class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>ump;
        int length=nums.size();
        for(int i=0;i<length;i++){
            ump[nums[i]]++;
        }

        for(auto ptr:ump){
            if(ptr.second>length/2){
                return ptr.first;
            }
        }

        return -1;
    }
};