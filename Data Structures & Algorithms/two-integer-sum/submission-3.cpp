class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> value;
        for(int i = 0; i < nums.size(); i++){
            if(value.count(nums[i])) return {value[nums[i]],i};
            value.insert({target - nums[i], i});
        }
        return {};
    }
};
