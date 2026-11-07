class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
    for (int num : nums) {
        mp[num]++;
    }

    vector<vector<int>> temp(nums.size() + 1);
    for (auto& [num, freq] : mp) {
        temp[freq].push_back(num);
    }


    vector<int> result;
    for (int i = temp.size() - 1; i > 0; i--) {
        for (int num : temp[i]) {
            result.push_back(num);
            if (result.size() == k) return result;
        }
    }
    return result;
        
    }
};
