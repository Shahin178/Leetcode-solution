class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int a=0;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]%2==0)
          {
              swap(nums[a],nums[i]);
              a++;
          }
      }
      return nums;  
    }
};