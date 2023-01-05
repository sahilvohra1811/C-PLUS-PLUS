#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int j,size,key,count=0;
	cout<<"Enter the size of array : ";
	cin>>size;
	int a[size];
	cout<<"Enter elements : ";
	for(int i=0;i<size;i++)
	{
		a[i]=size-i;
		count++;
	}
	cout<<"Elements before sorting:";
	count++;
	for(int i=0;i<size;i++)
	{	
		cout<<a[i]<<endl;
		count++;
	}
	for(int i=1;i<size;i++)
	{
		key = a[i];
		count++;
		j=i-1;
		count++;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			count++;
			j--;
			count++;
		}
		a[j+1]=key;
		count++;
	}
	cout<<"Elements after sorting:";
	count++;
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
		count++;
	}
	
	cout<<"count is : "<<count;
}
