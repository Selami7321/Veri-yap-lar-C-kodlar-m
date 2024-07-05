#include <stdio.h>
#include <stdlib.h>
struct dugum{
	int veri;
	struct dugum*gosterici;
	
};
struct dugum* bas =NULL;
struct dugum *gecici=NULL;

void basaEkle(int sayi){
	struct dugum * eklenecek;
	eklenecek=(struct dugum *)malloc(sizeof(struct dugum));
	eklenecek->veri=sayi;
	eklenecek->gosterici=bas;
	bas=eklenecek;
}
void yazdir(){
	gecici=bas;
	while(gecici->gosterici !=NULL){
		printf("%d ",gecici->veri);
		gecici=gecici->gosterici;
	}
	printf("%d",gecici->veri);
	
}

int main() {
	int sayi,adet=0;
	while(adet!=6){
		printf("bir sayi girin:");
		scanf("%d",&sayi);
		basaEkle(sayi);
		adet++;
	}
	yazdir();
	return 0;
}
