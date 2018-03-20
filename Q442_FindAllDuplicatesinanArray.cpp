class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //vectot<int> res;看清题意不能用额外的空间，因此只能对原数组操作
        //try1:先排序，再比较相邻元素
        /*
        sort(nums, nums+nums.size());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == nums[i+1]){
                res.push_back(nums[i]);
                i += 2;
            }
            else i++;
        }
        return res;
        */
        /*try2:还是先进行排序，若发现不等于下一个元素就删除
        sort(&nums, &nums+8);
        for(int i=0; i<nums.size(); i++) cout<<nums[i]<<endl;
        return nums;
        */
        //copy:骚操作来了：
        vector<int> res;
        int i = 0;
        while(i < nums.size()){
            if(nums[i] != nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        for(i=0; i<nums.size(); i++){
            if(nums[i] != i+1) res.push_back(nums[i]);
        }
        return res;
        
       
    }
};