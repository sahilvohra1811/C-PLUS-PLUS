#include<iostream>
#include<stdlib.h>
using namespace std;
int count = 0;
void heapify(int a[],int n,int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && a[left]>a[largest])
		largest=left;
		count++;
	if(right<n && a[right]>a[largest])
		largest=right;
		count++;
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		count++;
		heapify(a,n,largest);
		count++;
	}
}
int heapsort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(a,n,i);
		count++;
	}
	for(int i=n-1; i>=0;i--){
		swap(a[0],a[i]);
		count++;
			heapify(a,i,0);
			count++;
	}
}
int swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	count++;
}
int main(){
	int n,a[1000];
	cout<<"Enter array size:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=rand()%100;
		count++;
	}
	cout<<"Elements before sorting:";
	count++;
	for(int i=0;i<n;i++)
	{	
		cout<<a[i]<<endl;
		count++;
	}
	heapsort(a,n);
	cout<<"After sorting elements:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
		count++;
	}
	cout<<"Count is : "<<count;
}
