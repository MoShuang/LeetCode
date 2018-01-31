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
