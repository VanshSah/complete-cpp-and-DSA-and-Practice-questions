#include<iostream>
using namespace std;
int unique(int a[],int n)
{
	int xorsum = 0;
	for(int i=0;i<n;i++)
	{
		xorsum = xorsum^a[i];
	}
	return xorsum;
}
int main()
{
	int a[]={1,2,3,4,1,2,3};
	cout<<unique(a,7)<<endl;             // 7 is size of an array
	return 0;
}