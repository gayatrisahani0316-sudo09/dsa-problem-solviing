class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());        
        int n = s.length();
        int left = 0;
        int right = 0;        
        while (right < n) {
            while (right < n && s[right] == ' ') right++;            
            if (right >= n) break;            
            if (left > 0) {
                s[left] = ' ';
                left++;
            }            
            int word_start = left;            
            while (right < n && s[right] != ' ') {
                s[left] = s[right];
                left++;
                right++;
            }            
            reverse(s.begin() + word_start, s.begin() + left);
        }        
        s.resize(left);
        return s;
    }
};