#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
	};
struct node*start=NULL;
struct node*temp=NULL;
struct node*prev=NULL;
struct node*last=NULL;

void basaEkle(int sayi){
struct node*eleman=(struct node*)malloc(sizeof(struct node));
		eleman->data=sayi;

	if(start==NULL){
	   start=eleman;
	   start->next=start;
	   	
	}else{
		temp=start;
		while(temp->next !=start){
			temp=temp->next;
			
		}
		temp->next=eleman;
		eleman->next=start;
		start=eleman;
	}
}

void sonaEkle(int sayi){
struct node*eleman=(struct node*)malloc(sizeof(struct node));
		eleman->data=sayi;

	if(start==NULL){
	   start=eleman;
	   start->next=start;
	   	
	}else{
		temp=start;
		while(temp->next !=start){
			temp=temp->next;
			
		}
		temp->next=eleman;
		eleman->next=start;
		
	}
}
void bastanSil(){
	if(start==NULL){
		printf("liste bos silinecek eleman yokk!!");		
	}
	else{
		if(start->next==start){
			free(start);
			start=NULL;
			
		}
		else{
			last =start;
			while(last->next !=start){
				last=last->next;
					}
			temp=start->next;
			free(start);
			last->next=temp;
			start=temp;
		}
	}
}
void sondanSil(){
	if(start==NULL){
		printf("liste bos silinecek eleman yokk!!");		
	}
	else{
		if(start->next==start){
			free(start);
			start=NULL;
			
		}
		else{
			last =start;
			while(last->next->next !=start){
				last=last->next;
					}
			temp=last;
			free(last->next);
			last->next=start;
			
		}
	}
}
int elemanSay(){
	int adet=0;
	if(start==NULL)
	return 0;
	else{
		temp=start;
		while(temp->next !=start){
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
		while(temp->next !=start){
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
		printf("liste bosss");
		
	}else{
		temp=start;
		while(temp->next !=start){
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("%d", temp->data);
	}
}
int main() {
	while(1){
	
int sayi,secim;
printf("\n 1--->basa eleman  eklemek icin \n");
printf("2--->sona eleman  eklemek icin \n");
printf("3--->bastan eleman silmek   icin \n");
printf("4--->sondan eleman silmek   icin \n");
printf("5--->eleman adeti icin   \n");
printf("6--->data toplami\n");
printf("7--->listele\n");
printf("seciminizi yapiniz :");
scanf("%d",&secim);

     switch(secim){
     	case 1:
     		printf("basa eklenecek sayi:");
     		scanf("%d",&sayi);
     		basaEkle(sayi);
     		break;
	    case 2:
	    	printf("sona eklenecek sayi :");
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
	    printf("eleman adedi =%d",elemanSay());
			elemanSay();
	    	break;
	    case 6:
	    	printf("data toplami =%d",dataToplam());
	    	dataToplam();
	    	break;
        case 7:
		listele();	
	 }

}
	return 0;
}
