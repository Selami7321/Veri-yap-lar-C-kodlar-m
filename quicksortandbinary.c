#include <stdio.h>
#include <stdlib.h>

void quickSort(int dizi[],int bas,int son){
	int i,j,pivot,temp;
	i=bas;
	j=son;
	pivot=dizi[(bas+son)/2];
	do{
		while(dizi[i]<pivot)
		i++;
		while(dizi[j]>pivot)
		j--;
		
		if(i<j){
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
	quicksort(dizi,bas,j);
}

bool binarySearch(int dizi[],int bas,int son,int aranan){
	while(son>=bas){
		int orta=dizi[(bas+son)/2];
		if(orta==aranan)
		return true;
		if(orta>aranan)
		bas++;
		if(orta<aranan)
		son--;
		
	}
	return false;
	
}


int main(int argc, char *argv[]) {
int n;
printf("dizinin boyunu giriniz:");
scanf("%d",&n);
int i=0;
whiile(i<n){
	printf("sayi:");
	scanf("%d",&dizi[i]);
	i++;
	
}
int aranan;
printf("arad���n�z say�y� giriniz:");
scanf("%d",&aranan);

quickSort(dizi,0,n-1);
printf("dizideki say�lar h�zl� bir �ekilde s�raland�...\n");
for(i=0;i<n;i++)
printf("%d",dizi[i]);

int sonuc=binarySearch(dizi,0,n-1,aranan);
if(sonuc)
printf("aranan say� dizide mevcut");
else
printf("aranan say� dizide yok");



	return 0;
}
