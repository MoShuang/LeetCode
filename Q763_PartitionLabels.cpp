class Solution {
public:
    vector<int> partitionLabels(string S) {
        //第一次遍历字符串并生成其中每个字符的最远位置然后用字典储存;
        //第二次遍历选择首个字符的最远位置为当前分部的长度，然后向后遍历若当前位置字符的最远位置小于长度则跳过;若大于修改长度;等于则为分段尾
        map<char,int> last;//cpp中的map模板库程初始化实例
        for(int i = 0; i < S.length(); i++){ //遍历并生成字典
            last[S[i]] = i; //此处存在一个非逻辑问题（语法）:初始化映射时键应当是char（单个字符）
        } 
        /*
        map<char, int> ::iterator it;//使用迭代器遍历map
        it = last.begin();
        while(it != last.end()){
            cout<<it->first;//输出键
            cout<<it->second<<endl;//输出值
            it++;
        }
        */
        vector<int> ans; //初始化结果矢量（列表）
        int length = last[0]; //将分部首个元素的长度设为分部长度，直接跳到下一个分部的起始元素;考虑从0开始，长度需要+1
        for(int i = 0; i < S.length(); i++){ //整部分进行遍历
            //对长度大于当前分部长度的字符进行扩展
            if(last[S[i]] > length) length = last[S[i]];
            else if((last[S[i]] == length)&&(i == length)){ //长度刚好等于分部长度并且该厂读就是最大长度位置，说明是当前分部的最后一个元素
                ans.insert(ans.end(), length); //此处有逻辑错误:插入位置不是数值，而是指针
                //另外此处需要考虑减去已分段的长度：另作处理，并且第一端长度需+1
                length = last[S[i+1]];
            }
        }
        for(int i=ans.size(); i>=0; i--) ans[i] = ans[i] - ans[i-1];
        ans[0] += 1;
        return ans;
    }
};

/*
别人的答案：思路相同，但是代码简略得多
vector<int> partitionLabels(string S) {
  vector<int> res, pos(26, 0);  直接用长度为26的vector充当字典
  for (auto i = 0; i < S.size(); ++i) pos[S[i] - 'a'] = i; 
  for (auto i = 0, idx = INT_MIN, last_i = 0; i < S.size(); ++i) {
    idx = max(idx, pos[S[i] - 'a']); 直接使用内置函数max
    if (idx == i) res.push_back(i - exchange(last_i, i + 1) + 1); vector的插入元素方法push_back
  }
  return res;
}
*/
