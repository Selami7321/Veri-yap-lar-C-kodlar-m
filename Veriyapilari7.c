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
void bastanSil(){
    if(start!=NULL){

	temp=start->next;
	free(start);
	start=temp;}

else{
	free(start);
	
}
}
void sondanSil(){
	if(start->next !=NULL){
		temp =start;
		while(temp->next->next !=NULL){
			temp=temp->next;
			
		}
		free(temp->next);
		temp->next=NULL;
	}
	else{
		bastanSil();
		
	}
}
void aradanSil(int veri){
	temp=start;
	if(temp->data==veri){
		bastanSil();
		
	}else{
		struct node *temp2;
		temp2=(struct node*)malloc(sizeof(struct node));
		while(temp->next->data != veri){
			temp=temp->next->next;
		}
		if(temp->next->next==NULL){
			sondanSil();
			
		}else{
		
		
		temp2=temp->next->next;
		free(temp->next);
		temp->next=temp2;
	}
	}
}
void tersCevir(){
	struct node*temp2=NULL;
	struct node*prev=NULL;
	temp=start;
	while(temp !=NULL){
		temp2=temp->next;
		temp->next=prev;
		prev=temp;
		temp=temp2;
		
	}
	start=prev;
	
}
int elemanSay(){
	int adet=0;
	if(start==NULL)
	return adet;
	else{
		temp=start;
		while(temp->next !=NULL){
			adet ++;
			temp=temp->next;
			
		}
		adet ++;
		return adet;
	}
}
int dataToplam(){
	int toplam=0;
	if(start==NULL)
	return 0;
	else{
		temp=start;
		while(temp->next!=NULL){
			toplam +=temp->data;
			temp=temp->next;
		}
		toplam+=temp->data;
	}
	return toplam;
}
void yazdir(){
	system("cls");
	if(start!=NULL){
	
	temp=start;
	while(temp->next!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	printf("%d",temp->data);
	}else{
		printf("ELEMAN YOK !!!");
		
	}
	
}

int main() {
	
	int sayi,adet=0,secim,n;
	while(adet!=6){
		printf("\n basa eleman eklemek icin 1 \n");
		printf("\n sona eleman eklemek icin 2 \n");
		printf("\n araya eleman eklemek icin 3 \n");
		printf("\n bastan eleman silmek icin 4 \n");
		printf("\n sondan eleman silmek icin 5 \n");
		printf("\n aradan eleman silmek icin 6 \n");
		printf("\n elemanlari ters cevirmek icin 7 \n");
		printf("\n eleman adeti icin  8 \n");
		printf ("\n datalarin toplami icin 9 \n");
		printf("seciminizi yapiniz \n");scanf("%d",&secim);
		
		switch(secim){
			case 1:printf("\n basa eklenecek elemanin degeri :\n");scanf("%d",&sayi);
			basaEkle(sayi);
			yazdir();
			break;
			case 2:printf("\n sona eklenecek elemanin degeri :\n");scanf("%d",&sayi);
			sonaEkle(sayi);
			yazdir();
			break;
			case 3:printf("hangi sayidan once:");scanf("%d",&n);
			printf("\n araya eklenecek elemanin degeri : \n");scanf("%d",&sayi);
			arayaEkle(n,sayi);
			yazdir();
			break;
			case 4:
				bastanSil();
				yazdir();
				break;
		    case 5:
		    	sondanSil();
		    	yazdir();
		    	break;
		    case 6:
		    	printf("aradan silinecek elemanin degeri :");scanf("%d",&sayi);
		    	aradanSil(sayi);
		    	yazdir();
		    	break;
		    case 7:
		    	printf("elemanlar ters ceviriliyor ....\n");
		    	tersCevir();
		    	yazdir();
		    	break;
		    case 8:
		    	printf("\n Eleman adeti : %d",elemanSay());
		    	
				break;
			case 9:
				printf("\n Datalarin toplami :%d",dataToplam());
				break;
		    	
			
			
		}
	}
	
	
	
	
	
	
	
	return 0;
}
