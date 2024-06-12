class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int,int>ump;

        //calculating the length
        int length=nums.size();

        //looping in the array 
        for(int i=0;i<length;i++){
            ump[nums[i]]++;
        }

        //updating the vector 
        for(auto itr:ump){
            if(itr.second>1){
                vec.push_back(itr.first);
            }
        }

        return vec;


    
        
    }
};