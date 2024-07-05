#include <stdio.h>
#include <stdlib.h>

# define BOY 10
struct yigin{
	int dizi[BOY];
	int indis;   //pop
};
struct yigin y1;

void elemanEkle(int sayi){   //push
	if(y1.indis==BOY-1){
		printf("yigin doludur\n");
	}else{
		y1.indis++;
		y1.dizi[y1.indis]=sayi;
	}
	
	
}
void elemanCikar(){
	if(y1.indis==-1){
		printf("yigin bostur !! cikacak eleman yoktur");
	}else{
		int cikansayi=y1.dizi[y1.indis];
		y1.indis--;
		printf("%d sayisi yigindan cikarilmistir \n", cikansayi);
		
	}
}
void yazdir(){
	system("cls");
	if(y1.indis==-1){
		printf("yigin bos!!");
	}else{
		int i;
		for(i=y1.indis;i>-1;i--){
			printf("%d\n",y1.dizi[i]);
			
		}
	}
}

int main(int argc, char *argv[]) {
	
	y1.indis=-1;
	int secim,sayi;
	while(1){
	
	printf("YIGIN/STACK\n");
	printf("1--->eleman ekle(push)\n");
	printf("2--->eleman cikar(pop)\n");
	printf("3--->yazdir(display)\n");
	printf("4--->CIKIS\n");
	printf("seciminizi yapiniz :\n");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			printf("eklenecek sayi:\n");
			scanf("%d",&sayi);
			elemanEkle(sayi);
			break;
	    case 2:
	    	elemanCikar();
	    	break;
	    case 3:
	    	yazdir();
	    	break;
	    case 4:
	    	printf("sistemden cikis yapiliyor...");
	}
	
	
	
	return 0;
}
}
