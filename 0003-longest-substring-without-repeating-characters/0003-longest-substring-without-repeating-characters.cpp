class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> lastSeen(256, -1);
        int left = 0, maxLength = 0;
        for (int right = 0; right < n; right++) {
            if (lastSeen[s[right]] != -1) {
                left = max(left, lastSeen[s[right]] + 1);
            }
            lastSeen[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};