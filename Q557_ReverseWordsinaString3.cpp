class Solution {
public:
    string reverseWords(string s) {
        for(int i=0; i < s.length(); i++){
            if(s[i] != ' '){ //找到非空的位置;另外单个字符需要用单引号
                int j = i;
                for(; j < s.length() && s[j] != ' '; j++); //找到一个空位
                reverse(s.begin() + i, s.begin() + j); //使用了C++的STL，即标准库函数；以及字符串数据结构的属性；此外reverse函数传递的是地址
                i = j - 1;
            }
    
        }
        return s;
        
    }
/*
Submit Runtime:26ms
T: O(n^2)
*/
};