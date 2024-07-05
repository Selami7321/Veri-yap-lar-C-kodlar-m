#include <stdio.h>
#include <stdlib.h>
// quickSort(hizli sýralama algoritmasý)
// 1)pivot belirle
// 2)iþlem recursive(özyinelemeli)olarak devam edecek

void quickSort(int dizi[],int bas,int son){
	int i,j,pivot,temp;
	j=son;
	i=bas;
	pivot=dizi[(i+j)/2];
	
	do{
		while(dizi[i]<pivot)
		i++;
		while(dizi[j]>pivot)
		j--;
		if(i<=j){
			temp=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=temp;
			i++;
			j--;
		}
	}while(i<j);
	if(i<son)
	quickSort(dizi,i,son);
	if(bas<j)
	quickSort(dizi,bas,j);
}


int main(int argc, char *argv[]) {

int n;
printf("dizinin boyutunu giriniz:\n");
scanf("%d",&n);
int dizi[n];
int i=0;
while(i<n){
	printf("Sayi:");
	scanf("%d",&dizi[i]);
	i++;
}
quickSort(dizi,0,n-1);
for(i=0;i<n;i++)
printf("%d ",dizi[i]);


	return 0;
}
