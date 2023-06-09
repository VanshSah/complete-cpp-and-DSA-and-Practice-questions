#include<bits/stdc++.h>
using namespace std;
int rainWater(int a[], int n)
{
	int left[n], right[n];
	left[0] = a[0];
	for(int i=1;i<n;i++)
	{
		left[i] = max(left[i-1],a[i]);
	}
	right[n-1] = a[n-1];
	for(int i=n-2;i>=0;i--)
	{
		right[i] = max(right[i+1],a[i]);
	}
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		ans += min(left[i],right[i])-a[i];           // formula type used
	} 
	return ans;
}                                                          
int main()
{
	int a[] = {3,1,2,4,0,1,3,2};                 
	int n = sizeof(a)/sizeof(a[0]);
	cout<<rainWater(a,n);
}