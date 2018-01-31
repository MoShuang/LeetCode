class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num+1, 0); //初始化可用长度为num的矢量，并初始化每个元素为0
        for(int i=1; i<=num; i++){
               res[i] = res[i & (i-1)] + 1; //骚操作：与其前边的一个数按位相与就得到其前一个数的二进制中1的个数
        }
        return res;
        
    }
};
/*
RunTime:2ms
*/