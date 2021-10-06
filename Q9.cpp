class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int totalsum =0;
    for(int n: nums)
     {
      totalsum+=n;
     }

    int leftsum =0;
    for(int i =0;i<nums.size();i++)
    {
        int rightsum = totalsum - nums[i] - leftsum;
        if(rightsum==leftsum)
    {
        return i;
    }
     leftsum += nums[i];
  
    }
   
    return -1;

}
};
    