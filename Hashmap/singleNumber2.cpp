class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>ump;
        int number=0;
        int length=nums.size();
        for(int i=0;i<length;i++){
            ump[nums[i]]++;
        }

        for(const auto& itr:ump){
            if(itr.second==1){
                number=itr.first;
                break;

            }
        }

        return number;
        
    }
};