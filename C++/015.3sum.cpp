class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> re;
        vector<int> temp(3);
        int len=nums.size();
        if(len<3)return re;
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;++i){
            if(nums[i]>0)break;
            if(i>0&&nums[i]==nums[i-1])continue;
            int L=i+1;
            int R=len-1;
            while(L<R){
                int sum=nums[i]+nums[L]+nums[R];
                if(sum==0){
                    temp[0]=nums[i];
                    temp[1]=nums[L];
                    temp[2]=nums[R];
                    re.push_back(temp);
                    while(L<R&&nums[L]==nums[L+1])L++;
                    while(L<R&&nums[R]==nums[R-1])R--;
                    L++;
                    R--;
                }
                else if(sum<0)L++;
                else if(sum>0)R--;
            }
        }
        return re;
    }
};