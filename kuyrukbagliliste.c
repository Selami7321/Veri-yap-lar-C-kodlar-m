#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node*next;
	
};
struct node*temp=NULL;
struct node*front=NULL;  //bastaki düðümü tutar
struct node*rear=NULL;   //kuyruðun sonundaki düðümü tutar

void elemanEkle(int veri){
	struct node*eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=veri;
	if(front==NULL){
		front=eleman;
		front->next=front;
		rear=eleman;
		rear->next=NULL;
		
	}else if(front->next==front){
		rear->next=eleman;
		rear=eleman;
		rear->next=NULL;
		front->next=rear;
		
	}else{
		rear->next=eleman;
		rear=eleman;
		rear->next=NULL;
		
	}
}
void elemanCikar(){
	if(front==NULL){
		printf("kuyruktan cikarilabilecek eleman yoktur");
		
	}else{
		temp=front;
		while(temp->next!=NULL){
			printf("%d elemani kuyruktan cikarildi \n",front->data);
			temp=front->next;
			free(front);
			front=temp;
			
		}

	}
}
void yazdir(){
	system("cls");
	if(front==NULL){
		printf("kuyruk bos");
		
	}else{
		temp=front;
		while(temp->next!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
			
		}
		printf("%d\n",temp->data);
	}
}
int main(int argc, char *argv[]) {
	while(1){
	
	int secim,sayi;
	printf("\nQUEUE(KUYRUK)\n");
	printf("1--->eleman ekle\n");
	printf("2--->eleman cikar\n");
	printf("3--->yazdir\n");
	printf("4--->CIKIS\n");
	printf("seciminizi yapiniz:\n");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			printf("kuyruga eklenecek elemani giriniz:\n");
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
			printf("sistemden cikis yapiliyor");
			return 0;
			
	}
	
}
	
	
	return 0;
}
