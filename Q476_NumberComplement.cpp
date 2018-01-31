class Solution {
public:
    int findComplement(int num) {
        unsigned int mask = ~0; //初始化为32位的11...11;而且不用int的话默认为int的无符号型
        while(mask & num) mask <<= 1; //mask = mask << 1;用来获得mask与num未重复部分
        return ~mask & ~num; //取反再按位与即得结果
        
    }
};

/*
Sample RunTime：3ms
Submit Runtime: 9ms
*/