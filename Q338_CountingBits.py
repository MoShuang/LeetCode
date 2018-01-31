class Solution:
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        res = []
        for i in range(num+1): #range列举的区间为左闭右开
            res.append(bin(i).count('1')) #注意区分bin和bytes两个函数的区别
        return res
        
'''
RunTime:56ms
'''