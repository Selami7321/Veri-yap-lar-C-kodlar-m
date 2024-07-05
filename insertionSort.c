#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
void insertionSort(int arr[],int n){
	int i,j;
	for(i=1;i<n;i++){
		for(j=i;j>0;j--){
			if(arr[j]<arr[j-1])
			swap(&arr[j],&arr[j-1]);
		}
	}
}

void yazdir(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
		
	}
}
int main() {
	
	int arr[]={1,4,6,2,0,5,9,7,3,8};
	int n=sizeof(arr)/sizeof(arr[0]);  // adedi bulduk
	
	insertionSort(arr,n);
	yazdir(arr,n);
	
	
	
	
	
	
}
