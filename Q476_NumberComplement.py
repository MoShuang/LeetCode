class Solution:
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        i = 1
        while i <= num: #��ȡ��num��һ��������λ����
            i = i << 1
        return (i - 1) ^ num #����-1���ݳ�num�����䲹��
        
'''
Submit Runtime: 9ms
'''