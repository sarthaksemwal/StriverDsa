class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int length=nums.size();
        unordered_map<int,int>umap;
        for(int i=0;i<length;i++){
            umap[nums[i]]++;

        }
        for(const auto& itr:umap){
            if(itr.second>1){
                return true;
            }
        }

        return false;
        
    }
};