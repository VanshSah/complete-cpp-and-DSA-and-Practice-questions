#include<iostream>
using namespace std;
int lastocc(int a[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(lastocc(a,n,i+1,key) != -1)
	return lastocc(a,n,i+1,key);
	if(a[i]==key)
	{
		return i;
	}
	return -1;
}
int main()
{
	int a[] = {4,2,1,2,5,2,7};
	cout<<lastocc(a,7,0,2)<<endl;
	return 0; 
}