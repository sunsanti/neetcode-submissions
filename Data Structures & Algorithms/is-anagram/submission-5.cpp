class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> seen;
        unordered_map<char,int> seen2;
        for(char letter : s){
            if(!seen.count(letter)){
                seen.insert({letter, 0});
            } else {
                seen[letter]++;
            }
        }
        for(char letter2: t){
            if(!seen2.count(letter2)){
                seen2.insert({letter2, 0});
            } else {
                seen2[letter2]++;
            }
        }
        if(seen != seen2){
            return false;
        } else { return true; }
    }
};
