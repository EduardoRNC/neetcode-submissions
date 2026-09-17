class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return false;
        }
        
        for(int i = 0; i <= nums.size()-1; i++)
        {
            auto it = find(nums.begin()+i+1, nums.end(),nums[i]);
            if(it != nums.end())
            {
                return true;
            }
        } 
        return false;
    }
};