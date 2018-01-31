class Solution{
public:
    string complexNumberMultiply(string a, string b){
	    int ra, ia, rb, ib;
	    char buffer;//占位一个字符的变量，用于存储+
	    stringstream aa(a), bb(b), ans;//stringsteam是字符串流，它将流与存储在内存中的string对象绑定，在多种数据类型该之间实现自动格式化
	    aa >> ra >> buff >> ia >> buff;
	    bb >> rb >> buff >> ib >> buff;
        ans << ra*rb -ia*ib << '+' << ra*ib + rb * ia << 'i';
	    return ans.str();
    }
};//类定义结束后需加分号
