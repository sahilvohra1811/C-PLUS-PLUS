#include<iostream>
#include<stdlib.h>
using namespace std;
int count=0;
int binary_search(int a[],int size)
{
	int num;
	cout<<"Enter the elements which you want to search:";
	cin>>num;
	count++;
	int start = 0;
	int end = size;
	while(start<=end)
	{
		int mid = (start + end )/2;
		if(a[mid]==num)
		{
			return mid;
			count++;
		}
		else if(a[mid]>num)
		{
			end = mid - 1;
			count++;
		}
		else
		{
			start = mid +1;
			count++;
		}
	}
	return -1;
	count++;
}

int main()
{
	int a[1000],n,index;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Elements are : ";
	count++;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		count++;
	}
	cout<<"Enter elements are: ";
	count++;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
		count++;
	}
	index = binary_search(a,n);
	count++;
	cout<<"Number present at " <<index<< endl;
	cout<<"count variable is : "<<count;
	
}
