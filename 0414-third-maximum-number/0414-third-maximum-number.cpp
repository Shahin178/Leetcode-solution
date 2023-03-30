class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
       int count=1;
        int res=0;
        if(nums.size()==2)
            return nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                count++;
            }
            else
                continue;
            if(count==3)
                return nums[i];
        }
        return nums[0];
    }
};