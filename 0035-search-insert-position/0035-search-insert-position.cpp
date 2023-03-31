class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int beg = 0;  
    int end = nums.size()-1; 
        // if(target==0)
        //     return 0;
    if(target<nums[0])
        return 0;
    if(target>nums[nums.size()-1])
        return nums.size();
while ( beg <= end)  
{  
    int mid = (beg + end) / 2;  
    if (nums[mid] == target)   
        return mid;   
    else if(nums[mid]==target-1)
        return mid+1;
    else if(nums[mid+1]==target+1)
        return mid+1;
    else if (nums[mid] > target)  
        end = mid - 1;  
    else if (nums [mid] < target)  
        beg = mid + 1;  
}  
return -1;   
    }
};