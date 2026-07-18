class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;       
        for (const string& s : strs) {
            int count[26] = {0};
            for (char c : s) {
                count[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + '#';
            }           
            anagramGroups[key].push_back(s);
        }       
        vector<vector<string>> result;
        result.reserve(anagramGroups.size());
        for (auto& pair : anagramGroups) {
            result.push_back(move(pair.second));
        }        
        return result;
    }
};