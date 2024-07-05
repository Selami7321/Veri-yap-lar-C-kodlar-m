#include <stdio.h>
#include <stdlib.h>

#define BOY 5
int dizi[BOY];
int bas=-1,son=-1;  //bas=front   son=rear
void elemanEkle(int veri){
	if(son==BOY-1){
		printf("kuyruk doludur");
		
	}else{
		if(bas==-1)
		bas=0;
		son++;
		dizi[son]=veri;
		
	}
}
void elemanCikar(){
	if(bas==-1 || bas>son){
		printf("kuyruk bostur!");
		bas=-1;
		son=-1;
	}else{
		bas=bas+1;
	}
}
void yazdir(){
	system("cls");
	if(bas==-1)
	printf("kuyruk bos\n");
	else{
		int i;
		for(i=bas;i<=son;i++){
			printf("%d\n",dizi[i]);
		}
	}
}
int main(int argc, char *argv[]) {
while(1){

int secim,sayi;
printf("QUEUE(KUYRUK)\n");
printf("1--->eleman ekle\n");
printf("2--->eleman cikar\n");
printf("3--->yazdir\n");
printf("4--->CIKIS\n");
printf("seciminizi yapiniz \n");
scanf("%d",&secim);
switch(secim){
	case 1:
		printf("kuyruga eklenecek eleman:\n");
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
		printf("sistemden cikis yapiliyor\n");
		return 0;
		
}




}
	return 0;
}
