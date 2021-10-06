#include <iostream>
using namespace std;

int main() {
	int tc;
	//// no. of testcases
	cin>>tc;
	while(tc!=0)
	{
	 int n,i;
	 int arr[10000];
	 ///size of an array
	 cin>>n;
	 
	 for(i=0;i<n;i++)
	 {
	  cin>>arr[i];
	 }
	 
	 for(i=n-1;i>=0;i--)
	 {cout<<arr[i];
	  cout<<" ";   
	 }
	 tc--;
	}
	return 0;
}

/////////// My code is not working for every test case