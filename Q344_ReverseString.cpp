class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(), s.begin()+s.length());
        return s;
    }
/*
Submit:12ms
*/
};