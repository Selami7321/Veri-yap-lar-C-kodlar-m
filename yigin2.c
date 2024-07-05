#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*temp=NULL;
struct node*top=NULL;

void push(int veri) // eleman ekleme iþlemi
{
	struct node* eleman=(struct node* )malloc(sizeof(struct node));
	eleman->data=veri;
	if(top==NULL){
		top=eleman;
		top->next=NULL;
		
	}else{
		eleman->next=top;
		top=eleman;
	}
}
void pop(){
	if(top==NULL){
		printf("stack bos,cikarilacak eleman yok");
		
	}else{
		printf("%d elemani cikarildi ",top->data);
		temp=top->next;
		free(top);
		top=temp;
		
	}
}
void print(){
	system("cls");
	if(top==NULL){
		printf("stack bos!!");
		
	}else{
		temp=top;
		while(temp->next !=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
			
			
		}
		printf("%d\n",temp->data);
	}
}

void peek(){
	if(top==NULL)
	printf("stack bos!!");
	else{
		printf("yigindaki en üst eleman:%d \n",top->data);
	}
}
int main(int argc, char *argv[]) {
	int secim,sayi;
	while(1){
		printf("\nSTACK(YIGIN)\n");
		printf("1--->push islemi\n");
		printf("2--->pop islemi\n");
		printf("3--->print islemi\n");
		printf("4--->peek islemi\n");
		printf("5--->CIKIS\n");
		printf("seciminizi yapiniz:\n");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("eklenecek sayi:");
				scanf("%d",&sayi);
				push(sayi);
				break;
			case 2:
				pop();
				break;
			case 3:
				print();
				break;
			case 4:
				peek();
				break;
			case 5:
				printf("sistemden cikis yapiliyor");
				return 0;
				
		}
	}
	
	
	
	
	
	
	return 0;
}
