class Solution {
public:
    int findComplement(int num) {
        unsigned int mask = ~0; //��ʼ��Ϊ32λ��11...11;���Ҳ���int�Ļ�Ĭ��Ϊint���޷�����
        while(mask & num) mask <<= 1; //mask = mask << 1;�������mask��numδ�ظ�����
        return ~mask & ~num; //ȡ���ٰ�λ�뼴�ý��
        
    }
};

/*
Sample RunTime��3ms
Submit Runtime: 9ms
*/