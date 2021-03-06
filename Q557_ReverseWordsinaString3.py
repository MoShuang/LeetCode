class Solution(object):
    def reverseWords(self, s):
        return ' '.join(s.split()[::-1])[::-1] #[start:end:step]若没有则采用默认值
        #此外，此处进行了两次反转，然后用字符.join直接返回临时结果
        """
        :type s: str
        :rtype: str
        """ 
" " "
Sample RunTime:59ms

" " "
'''        
python不显式区分传值传址，而是按传递参数的类型来：
所以python的传值和传址是根据传入参数的类型来选择的
传值的参数类型：数字，字符串，元组（immutable）
传址的参数类型：列表，字典（mutable）

        def swap(i, j):
            temp = i
            i = j
            j = temp
            
        res = []
        for word in s.split(" "):
            for c in range(len(word) / 2):
                #print(word[c])
                #print(word[len(word) - c - 1])
                swap(word[c], word[len(word) - c - 1])
            res.append(word)
        return str(res)
'''     

        
    
