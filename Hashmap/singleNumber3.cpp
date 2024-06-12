class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>number;
        unordered_map<int,int>ump;
        int length=nums.size();
        for(int i=0;i<length;i++){
            ump[nums[i]]++;
        }

        for(auto itr : ump){
            if(itr.second==1){
                number.push_back(itr.first);
            }
        }
       return number; 
    }
};