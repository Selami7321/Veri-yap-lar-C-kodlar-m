#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data ;
	struct node*next;
};
struct node * start =NULL;
struct node *temp=NULL;
void basaEkle(int veri){
	struct node*eleman;
	eleman=(struct node *)malloc(sizeof(struct node));
	eleman->data=veri;
	eleman->next=start;
	start=eleman;
}
void sonaEkle(int veri){
	struct node*eleman;
	eleman=(struct node *)malloc(sizeof(struct node));
	eleman->data=veri;
	eleman->next=NULL;
	if(start==NULL){
		start=eleman;
	}else{
		temp=start;
		while(temp->next !=NULL){
		temp=temp->next;	
		
		}
		temp->next=eleman;
	}
	
	
}
void yazdir(){
temp=start;
while(temp->next !=NULL){
	printf("%d", temp->data);
	temp=temp->next;
}	
printf("%d",temp->data);
}
int main(int argc, char *argv[]) {
int sayi,adet=0,secim;
while(adet!=6){
	printf("\n basa eleman eklemek icin 1 \n");
	printf("\nsona eleman eklemek icin 2 \n");
	printf("\nseciminizi yapiniz \n");scanf("%d", &secim);
	switch(secim){
		case 1:printf("\n basa eklenecek elemanýn degeri:\n");scanf("%d\ n", &sayi);
		basaEkle(sayi);
		yazdir();
		break;
		case2:printf("\n sona eklenecek elemanýn degeri:\n");scanf("%d \n",&sayi);
		sonaEkle(sayi);
		yazdir();
		break;
}  
adet++;
           	}








	return 0;
}
