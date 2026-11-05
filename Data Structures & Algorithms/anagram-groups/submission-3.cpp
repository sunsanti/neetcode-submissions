class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;

        for (string& s : strs) {
            vector<int> arr(26, 0);
            for (char c : s) arr[c - 'a']++;
            mp[arr].push_back(s);
        }
        
        vector<vector<string>> res;
        for (auto& [key, group] : mp) res.push_back(group);
        return res;
    }
};
