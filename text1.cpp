class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bitArray[32]={0};
        //统计每一位1的个数
        for(auto e:nums)
        {
            for(size_t i=0;i<32;++i)
            {
                if(e&(1<<i))
                {
                    bitArray[i]++;
                }
            }
        }
        int ret=0;
        
            for(size_t i=0;i<32;++i)
            {
                if(bitArray[i]%3==1)
                {
                    ret+=1<<i;
                }
            }
        

    return ret;
    }
};