class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        //先看一共有几个，假设是独立的块，再判断邻接情况
        //如何解决边界问题:只判断非起始行/列的前一行/列，若存在邻接则同时损失两条边长
        int count = 0, repeat = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    count++;
                    if(i!=0 && grid[i-1][j] == 1) repeat++;
                    if(j!=0 && grid[i][j-1] == 1) repeat++;
                }
                }                
            }
        //cout<<"count: "<<count<<"repeat: "<<repeat<<endl;
        return count*4 - repeat*2;
        } 
};