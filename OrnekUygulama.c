#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;
struct node*prev=NULL;

void basaEkle(int veri){
	
	struct node*eleman =(struct  node*)malloc(sizeof(struct node));
	eleman->data=veri;
	
	if(start == NULL){
		start=eleman;
		start->next=NULL;
	}
	else{
	temp=start;
	start=eleman;
	start->next=temp;
		
	}
	
	
}
void sonaEkle(int veri){
	struct node *eleman =(struct node* )malloc(sizeof(struct node));
	eleman->data=veri;
	eleman->next=NULL;
	if(start==NULL){
		start=eleman;
		
	}else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
			
		}
		temp->next=eleman;
	}
}

void bastanSil(){
	if(start==NULL){
		printf("Liste bos silinecek eleman yok \n");
	}else{
		if(start->next==NULL){
			free(start);
			start=NULL;
			
		}else{
			temp=start->next;
			free(start);
			start=temp;
		}
	}
}

void sondanSil(){
	if(start==NULL){
		printf("Liste bos eleman yok");
		
	}
	else{
		if(start->next ==NULL){
			free(start);
			start=NULL;
			
		}else{
			
		
		temp=start;
		while(temp->next->next !=NULL){
			temp=temp->next;
			
		}
		prev=temp;
		free(temp->next);
		prev->next=NULL;
}
	}
}
int elemanSay(){
	int adet=0;
	if(start==NULL)
	return 0;
	else{
		temp=start;
		while(temp->next !=NULL){
			adet++;
			temp=temp->next;
		}
		adet++;
	}
	return adet;
}
int dataToplam(){
	int toplam=0;
	if(start==NULL)
		return 0;
		else{
			temp=start;
			while(temp->next !=NULL){
				toplam +=temp->data;
				temp=temp->next;
			}
			toplam +=temp->data;
		}
		return toplam;
	}


void listele(){
    system("cls");
	if(start==NULL){
		printf("Liste BOS\n ");
		start=NULL;
	}
	else{
		temp=start;
	while(temp->next !=NULL){
		printf("%d -->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
	}
}

int main(int argc, char *argv[]) {
	int secim,sayi;
while(1){

	printf("\n \t MENU \n");
	printf("\n 1 --->Basa eleman ekle \n");
	printf("\n 2 --->Sona eleman ekle \n");
	printf("\n 3 --->Bastan eleman sil \n");
	printf("\n 4 --->Sondan eleman sil \n");
	printf("\n 5 --->Eleman adedi \n");
	printf("\n 6 --->Tum elemanlarin toplam degeri \n");
	printf("\n 7 --->Listele \n");
	printf("\n 8 --->CIKIS\n ");
	printf("seciminizi yapiniz ");
	scanf("%d", &secim);
	
	switch(secim){
		case 1:
			printf("basa eklenecek eleman :");
			scanf("%d", &sayi);
			basaEkle(sayi);
			break;
	case 2:
	        printf("sona eklenecek eleman :");
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
    	printf("eleman adedi :%d", elemanSay());
    	break;
    case 6:
    	printf("data toplami: %d", dataToplam());
    	break;
	
	case 7:listele();
     break;	
	case 8:
		return 0;
		
	
	}
	
	
}
	
	
	
	
	return 0;
}
