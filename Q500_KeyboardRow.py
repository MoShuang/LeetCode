class Solution(object):
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        #生成3个初始判断字母集（即键盘上的3行）
        r1, r2, r3 = ("qwertyuiop", "asdfghjkl", "zxcvbnm")
        #对单词转换为小写
        ans = []
        flag = True
        #需要注意的是python中传址还是传值是根据情况自动选定的

        #依次对每个单词的遍历，按第一个字母选择可能所在行，结合其后字母继续判断
        for word in words:
            if word[0].lower() in r1: #大小写不计 
                for letter_idx in range(len(word)):
                    if word[letter_idx].lower() not in r1:
                        flag = False
                        break
            elif word[0].lower() in r2:
                for letter_idx in range(len(word)):
                    if word[letter_idx].lower() not in r2:
                        flag = False
                        break                
            elif word[0].lower() in r3:
                for letter_idx in range(len(word)):
                    if word[letter_idx].lower() not in r3:
                        flag = False
                        break                
            if flag == True:
                ans.append(word) #出错在于只考虑了首字母大写的情况，未考虑原全小写的
            else:
                flag = True
                continue
                
        return ans
        