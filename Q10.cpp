class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
     bool inc;  
     for( int i=0;i<nums.size()-1;i++)
     { 
       if((nums[i]<nums[i+1])&&(nums[i+1]>nums[i]))
          inc=false;
       else if(nums[i]<=nums[i+1])  
           inc=true;
       else if(nums[i]>=nums[i+1]) 
           inc=true;
       else
          inc=true;
     }   
        return inc;
    }
};

/////// this is the code that I have written and  its has so many  error //////    