class Solution{
    public:

    //Function to rotate an array by d elements in counter-clockwise direction. 
    int rotateArr(int arr[], int d, int n)
    {
     int rev[n];
      int j=0;
      for(int i=d;i<n;i++)
      {
        rev[j]=arr[i];
        j++;
      } 
      
      for(int i=0;i<d;i++)
      {
       if(j<n)
       {
        rev[j]=arr[i];
        j++;
       }
      }
       
        for(int i=0; i<n; i++)
        {
            arr[i] = rev[i];
        }
    }
    
    };