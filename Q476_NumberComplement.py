class Solution:
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        i = 1
        while i <= num: #获取比num大一个二进制位的数
            i = i << 1
        return (i - 1) ^ num #该数-1再幂乘num即得其补码
        
'''
Submit Runtime: 9ms
'''