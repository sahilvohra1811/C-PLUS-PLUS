#include<iostream>
#include<stdlib.h>
using namespace std;
int count=0;
int linear_search(int a[],int size)
{
	int num;
	cout<<"Enter the elements which you want to search:";
	cin>>num;
	count++;
	for(int i=0;i<size;i++)
	{
		if (a[i]==num)
			{
				return i;
				count++;
			}
			count++;
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
	for(int i=0;i<n;i++)
	{
		a[i]=i;
		count++;
	}
	cout<<"Enter elements are: ";
	count++;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
		count++;
	}
	index = linear_search(a,n);
	count++;
	cout<<"Number present at " <<index<< endl;
	cout<<"count variable is : "<<count;
	
}
