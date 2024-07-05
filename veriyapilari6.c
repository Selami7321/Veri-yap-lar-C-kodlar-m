#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;
void basaEkle(int veri){
	struct node*eleman;
	eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=veri;
	eleman->next=start;
	start=eleman;
	
}
void sonaEkle(int veri){
	struct node*eleman;
	eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=veri;
	eleman->next=NULL;
	if(start==NULL){
		start=eleman;
		
		
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
			
		}
		temp->next=eleman;
		
	}
}
void arayaEkle(int n,int veri){
	struct node*eleman;
	eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=veri;
	temp=start;
	while(temp->next->data !=n){
		temp=temp->next;
		
	}
	struct node*temp2;
	temp2=(struct node *)malloc(sizeof(struct node));
	temp2=temp->next;
	temp->next=eleman;
	eleman->next=temp2;
	
}
void yazdir(){
	temp=start;
	while(temp->next!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	printf("%d",temp->data);
}

int main() {
	
	int sayi,adet=0,secim,n;
	while(adet!=6){
		printf("\n basa eleman eklemek icin 1 \n");
		printf("\n sona eleman eklemek icin 2 \n");
		printf("\n araya eleman eklemek icin 3 \n");
		printf("seciminizi yapiniz \n");scanf("%d",&secim);
		
		switch(secim){
			case 1:printf("\n basa eklenecek elemanin degeri :\n");scanf("%d ",&sayi);
			basaEkle(sayi);
			yazdir();
			break;
			case 2:printf("\n sona eklenecek elemanin degeri :\n");scanf("%d ",&sayi);
			sonaEkle(sayi);
			yazdir();
			break;
			case 3:printf("hangi sayidan once:");scanf("%d",&n);
			printf("\n araya eklenecek elemanin degeri : \n");scanf("%d ",&sayi);
			arayaEkle(n, sayi);
			yazdir();
			break;
			
		}
	}
	
	
	
	
	
	
	
	return 0;
}
