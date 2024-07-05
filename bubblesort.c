#include <stdio.h>
#include <stdlib.h>

//SIRALAMA ALGORÝTMALARI
//bubble sort
void swap(int *x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;	
}
void bubblesort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
			
		}
	}
}
void yazdir(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
	
}
int main() {
	int arr[]={1,4,5,6,7,9,2,8,3,0};
	int n=sizeof(arr)/sizeof(arr[0]);  //eleman sayýsýný bulduk
	bubblesort(arr, n) ;
	yazdir(arr, n) ;
	
	
}
