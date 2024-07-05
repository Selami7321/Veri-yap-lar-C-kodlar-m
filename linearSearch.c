#include <stdio.h>
#include <stdlib.h>
//Arama algoritmalarý
//Linear search(doðrusal arama )

int linearSearch(int dizi[],int n,int aranan){
	int i;
	for(i=0;i<n;i++){
		if(aranan==dizi[i])
			return i;
		
	
	}
	return -1;
}


int main(int argc, char *argv[]) {
	
	int n;
	printf("dizinin boyutunu giriniz:\n");
	scanf("%d",&n);
	int dizi[n];
	int i;
	
	while(i<n){
		printf("Sayi:\n");
		scanf("%d",&dizi[i]);
		i++;
		
	}
	printf("aranan sayiyi giriniz :\n");
	int aranan;
	scanf("%d",&aranan);
	
	int sonuc=linearSearch(dizi,n,aranan);
	if(sonuc==-1)
	printf("aranan sayi dizide YOKTUR !!!");
	else
	printf("aranan sayi dizide MEVCUTTUR");
	
	
	
	
	return 0;
}
