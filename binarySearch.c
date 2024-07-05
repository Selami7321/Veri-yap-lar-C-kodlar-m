#include <stdio.h>
#include <stdlib.h>
// binary search (ikili arama)
// bir pivot belirle ardýndan aranan sayýyý bul

bool binarySearch(int dizi[],int bas,int son ,int aranan)
{
	while(son>=bas){
		int orta=dizi[(bas+son)/2];
		if(orta == aranan)
		return true;
		if(orta<aranan)
		bas++;
		if(orta>aranan)
		son--;
		
	}
	return false;
	
}


int main() {
int n;
printf("dizinin boyunu giriniz :");
scanf("%d",&n);


int dizi[n];
int i=0;
while(i<n){
	printf("Sayiyi giriniz:");
	scanf("%d",&dizi[i]);
	i++;
	
}
printf("Aradiðiniz sayiyi giriniz :");
int aranan;
scanf("%d",&aranan);

int sonuc=binarySearch(dizi,0,n-1,aranan);
if(sonuc)
printf("aradiðiniz sayi dizide MEVCUTTUR");
else
printf("aradiðiniz sayi dizide YOKTUR !!!");





	return 0;
}
