#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
	struct node*prev;
};
struct node*start=NULL;
struct node*temp=NULL;
struct node*prev=NULL;
struct node*temp2=NULL;


void basaEkle(int sayi){
	struct node*eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=sayi;
	if(start==NULL){
		start=eleman;
		start->next=start;
		start->prev=start;
		
	}else{
		if(start->next==start){
			start->next=eleman;
			start->prev=eleman;
			eleman->next=start;
			eleman->prev=start;
			start=eleman;
			
		}else{
			temp=start;
			while(temp->next!=start){
				temp=temp->next;
				
			}
			temp->next=eleman;
			eleman->prev=temp;
			eleman->next=start;
			start->prev=eleman;
			start=eleman;
		}
	}
}

void sonaEkle(int sayi){
	struct node*eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=sayi;
	eleman->next=start;
	if(start==NULL){
		start=eleman;
		start->next=start;
		start->prev=start;
		
	}else{
		if(start->next==start){
			start->next=eleman;
			start->prev=eleman;
			eleman->next=start;
			eleman->prev=start;
			
			
		}else{
			temp=start;
			while(temp->next!=start){
				temp=temp->next;
				
			}
			temp->next=eleman;
			eleman->prev=temp;
			eleman->next=start;
			start->prev=eleman;
			
		}
	}
}
void bastanSil(){
	if(start==NULL){
		printf("liste bos silinecek eleman yok \n");
	}else{
		if(start->next==start){
			free(start);
			start=NULL;
		}else{
			temp=start;
			while(temp->next !=start){
				temp=temp->next;
				
			}
			temp2=start->next;
			free(start);
			temp->next=temp2;
			temp2->prev=temp;
			start=temp2;
			
		}
	}
}
void sondanSil(){
	if(start==NULL)
	{
		printf("liste bos silinecek eleman yok \n");
	}
	else
	{
		if(start->next==start){
			free(start);
			start=NULL;
		}else{
			temp=start;
			while(temp->next !=start){
				temp=temp->next;
				
			}
			temp2=temp->prev;
			free(temp);
			temp->next=temp2;
			temp2->next=start;
			start->prev=temp2;
			
			
		}
	}
}
int elemanSay(){
	int adet=0;
	if(start==NULL)
	return 0;
	else{
		temp=start;
		while(temp->next!=start){
			adet++;
			temp=temp->next;
			
		}
		adet++;
		return adet;
	}
}
int dataToplam(){
	int toplam=0;
	if(start==NULL)
	return 0;
	else{
		temp=start;
		while(temp->next!=start){
			toplam+=temp->data;
			temp=temp->next;
			
		}
		toplam+=temp->data;
		return toplam;
	}
}
void listele(){
	
	if(start==NULL){
		printf("liste bos\n");
		
	}else{
		temp=start;
		while(temp->next !=start){
			printf("%d->",temp->data);
			temp=temp->next;
			
		}
		printf("%d",temp->data);
	}
}
int main() {
	while(1){
		int sayi,secim;
		printf("\n 1--->basa ekle \n");
		printf("   2--->sona ekle\n");
		printf("   3--->bastan sil\n");
		printf("   4--->sondan sil\n");
		printf("   5--->eleman adedi:\n");
		printf("   6--->datalarin toplami:\n");
		printf("   7--->listele\n");
		printf("   8--->CIKIS\n");
		printf("seciminizi yapiniz:");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("basa eklenecek elemani giriniz :");
				scanf("%d",&sayi);
				basaEkle(sayi);
				break;
			case 2:
				printf("sona eklenecek elemani giriniz:");
				scanf("%d",&sayi);
				sonaEkle(sayi);
				break;
			case 3:
				bastanSil();
				break;
			case 4:
				sondanSil();
				break;
			case 5:
				printf("eleman adedi:%d", elemanSay());
				elemanSay(sayi);
				break;
			case 6:
				printf("data toplam:%d", dataToplam());
				dataToplam(sayi);
				break;
				case 7:
					listele();
					break;
				case 8:
					return 0;
					break;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
