class Solution:
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        return ''.join(s[::-1]) #注意join前的字符即在每个切片之间插入
" " "
Submit:97ms
" " " 