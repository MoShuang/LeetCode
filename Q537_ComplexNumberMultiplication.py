class Solution(object):
    def complexNumberMultiply(self, a, b):
	a1, a2 = map(int, a[:-1].split('+')) #利用了map函数强大的特性，分割、转化一次性到位
	b1, b2 = map(int, b[:-1].split('+'))
	return '%d+%di' % (a1 * b1 - a2 * b2, a1 * b2 + a2 * b1) #格式化输出

	'''
RunTime:63ms
	'''
