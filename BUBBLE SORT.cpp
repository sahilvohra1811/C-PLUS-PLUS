using namespace std;
#include<iostream>
#include<stdlib.h>
int main()
{
	int arr[100],i,j,temp,size,count=0;
	cout<<"Enter the size : ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		/*best case
		arr[i]=i;*/
		//worst case
		arr[i]=size-i;
		/*average case
		arr[i]=rand()%100;*/
		count++;
	}
	
	cout<<"Elements are befpre sorting : ";
	count++;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
		count++;
	}
	
	cout<<"Elements are after sorting : ";
	count++;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				count++;
				arr[i]=arr[j];
				count++;
				arr[j]=temp;
				count++;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
		count++;
	}
	
	cout<<"count is : "<<count;
}
