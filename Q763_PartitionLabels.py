class Solution(object):
    def partitionLabels(self, S):
	last = {c: i for i, c in enumerate(S)} #以字母为键，索引为值生成字典
	j = anchor = 0
	ans = [] #储存结果的列表
	for i, c in enumerate(S):
		j = max(j, last[c])	 #对每个位置的字母，若该位置已是最大位置则放入结果列表
		if i == j:
		ans.append(i - anchor + 1)
	    anchor = i + 1
																									        
	return ans
'''
分析
解决 ：划分标签问题
采用算法：采用了贪心算法，对每个位置的字符都对比是否是该字符的最大位置
Time：O(n)
Space：O(n)
TestRuntime：55ms
'''

"""对于注释双引号能够包含单引号
以下为自己的python解法：
class Solution:
    def partitionLabels(self, S):
        """
        :type S: str
        :rtype: List[int]
        """
        last = {}
        ans = []
        for i in range(len(S)): last[S[i]] = i
        length = last[S[0]]
        for j in range(len(S)): 
            if(length < last[S[j]]): length = last[S[j]]
            elif(j == length and last[S[j]] == length): 
                ans.append(length)
                if(j == len(S)-1): break
                length = last[S[j+1]] #该段报错字符串索引超出范围:取值时进行判断
        '''

        k = len(ans)
        while(k > 0):
            ans[k] = ans[k] - ans[k-1] #报错列表索引超出范围:不是0超出范围，而是len(ans)为长度，比位置大1超出了
            k = k - 1
            
        ans[0] = ans[0] + 1
        '''   
        for i in range(len(ans)-1,0,-1): ans[i] = ans[i] - ans[i-1]
        ans[0] = ans[0] + 1
        return ans
"""
