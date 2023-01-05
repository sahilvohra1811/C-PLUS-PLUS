#include<iostream>
using namespace std;

void swap(int arr[],int a,int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
int partition(int arr[],int l,int r){
	int pivot = arr[r];
	int i = l-1;
	for(int j=l;j<r;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,r);
	return i+1;
}
void quicksort(int arr[],int l,int r){
	if(l<r){
		int pi = partition(arr,l,r);
		quicksort(arr,l,pi-1);
		quicksort(arr,pi+1,r);
	}
}

int main(){
	int arr[]={55,94,53,12,11};	
	quicksort(arr,0,4);
	cout<<"Sorted array is :";
	for(int i =0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
