#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,n,j,c=0,min;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Elements before sorting : " <<endl;
	for(int i=0;i<n;i++)
	{
		//a[i]=rand()%100; : Average case
		//a[i]=i; : Best case
		a[i]=n-i; // worst case
	}
	c++;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;c++;
	}
	for(i=0;i<n;i++)
	{
		min=i;c++;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;c++;//we are just swaping the index of an element.
			}
		}
		int tem=a[min];c++;
		a[min]=a[i];c++;
		a[i]=tem;c++;
	}
	cout<<"Elements after sorting"<<endl;c++;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";c++;
	}
	cout<<endl;
	cout<<"Count is :"<<c<<endl;
	return 0;
}
