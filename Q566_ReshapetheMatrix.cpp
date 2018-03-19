class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        #先判断需要变化矩阵是否合理
        if(nums.size()*nums[0].size() != r*c) return nums;
        else{
            #使用临时一维向量暂存元素
            int index = 0;
            vector<int> temp(r*c, 0);
            for(int i=0; i<nums.size(); i++){
                for(int j=0; j<nums[0].size(); j++) temp[index++] = nums[i][j]; 
            }
            #先初始化符合尺寸的二维向量矩阵，再逐个填入
            index = 0;
            vector<vector<int>> res(r, vector<int>(c, 0));
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++) res[i][j] = temp[index++];
            }
            return res;
        }
    }
};

//更优解：不需要临时向量暂存元素，有总元素个数/行长=当前行数，总个数/列长=当前列数

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size(), n = nums[0].size(), o = m * n;
        if (r * c != o) return nums;
        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i = 0; i < o; i++) res[i / c][i % c] = nums[i / n][i % n];
        return res;
    }
};