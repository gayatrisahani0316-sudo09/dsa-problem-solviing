class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        if(s == goal) return true;
        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};