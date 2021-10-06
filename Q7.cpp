
class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
  
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int t=-1,s=INT_MAX;
        int l=-1;
        for(int i=0;i<n;i++)
        {
           if(arr[i]<x)
           {
               t=x-arr[i];
               if(t<=s)
               {
                   s=t;
                   l=i;
               }
           }
              
        }
       
         if(l==-1)
          return -1;
        return arr[l];
    }
};