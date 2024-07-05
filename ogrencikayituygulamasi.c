#include <stdio.h>
#include <stdlib.h>
// bu projenin amacý tek yönlü doðrusal baðlý liste yapýsý ile öðrenci kayýt uygulamasý yapmaktýr

struct ogrenci{
	int no;
	char ad[40];
	int vize,final;
	double ort;
	struct ogrenci*next;
};
typedef struct ogrenci node;

node*ekle(node*head)
{
	node*ogr=(node*)malloc(sizeof(node));   //düðümü tanýmladýk bellekte yerini ayýrdýk
	printf("ogrenci no:\n"); scanf("%d",&ogr->no);
	printf("ogrenci adi:\n"); scanf("%s",&ogr->ad);
	printf("vize notu:\n"); scanf("%d",&ogr->vize);
	printf("final notu:\n"); scanf("%d",&ogr->final);
	ogr->ort=ogr->vize*(0.4)+ogr->final*(0.6);
	
	if(head==NULL){
		head=ogr;
		head->next=NULL;
		printf("liste olusturuldu ilk ogrenci kayit edildi\n");
		
	}else{
		ogr->next=head;
		head=ogr;
		printf("ogrenci kayit edildi \n");
		
		
	}
	return head;
}

node*sil(node*head)
{
int yanlis=0;
	if(head==NULL){
		printf("liste bostur,silinecek eleman yoktur !!! \n");
		return head;
	}
	else{
		int ogrencino;
		printf("ogrenci numarasýný  giriniz \n");
		scanf("%d",&ogrencino);
		if(head->no==ogrencino && head->next==NULL){
		     free(head);
		     head->next=NULL;
		
			printf("listede kalan son ogrenci silindi \n");
			yanlis++;
			
		}
		
		else if(head->no==ogrencino && head->next !=NULL){
			node*p=head->next;
			free(head);
			head=p;
			yanlis=0;
			printf("%d numarali ogrenci silinmistir \n",ogrencino);
			yanlis++;
		}
		else{
		node*p=head;
		node*q=head;
		while(p->next !=NULL){
			if(p->no==ogrencino){
				q->next=p->next;
				free(p);
				yanlis=0;
				printf("%d numarali ogrenci silinmistir ",ogrencino);
				yanlis++;
				
				break;
			}
			q=p;
			p=p->next;
			
		}
		if(p->no==ogrencino){
			q->next=NULL;
			free(p);
			yanlis=0;
			printf("%d numarali ogrenci silinmistir \n",ogrencino);
			yanlis++;
		}	
		}
		if(yanlis!=0){
			printf("%d numarali ogrenci listede yoktur",ogrencino);
			
			
		}
	}
	return head;
	
}
node*yazdir(node*head)
{
	system("cls");
	if(head==NULL){
		printf("liste bostur \n");
		
		}
	else
	{
	node*p=head;
	while(p!=NULL){
		printf("---------------------------- \n");
		printf("No:%d Ad:%s Vize:%d Final:%d Ortalama:%.2f \n" ,p->no,p->ad,p->vize,p->final,p->ort );
		p=p->next;
	}
	
		
	}
	return head;
	
}

node*enbasariliogrenci(node*head)
{
	system("cls");
	int enyuksekOrt=head->ort;
	node*enbasarilidugum=head;
	if(head==NULL){
		printf("liste bos!!! \n");
		
	}
	else{
		node*p=head;
		while(p!=NULL){
			if(enyuksekOrt < p->ort){
				enyuksekOrt=p->ort;
				enbasarilidugum=p;
				
			}
			p=p->next;
		}
		printf("no:%d \n",enbasarilidugum->no);
		printf("ad:%s \n",enbasarilidugum->ad);
		printf("vize:%d \n",enbasarilidugum->vize);
		printf("final:%d \n",enbasarilidugum->final);
		printf("ortalama:%.2f \n",enbasarilidugum->ort);
		
	}
	return head;
	
}
int main() {
	int secim;
	node*head=NULL;
	while(1){
		printf("OGRENCI KAYIT UYGULAMAMIZA HOSGELDINIZZZ\n");
		printf("1--->EKLE \n");
		printf("2--->SIL\n");
		printf("3--->YAZDIR\n");
		printf("4--->EN BASARILI OGRENCIYI GORUNTULE\n");
		printf("5--->SISTEMDEN CIKIS YAP\n");
		printf("LUTFEN YUKARIDAKI MENUDEN 1-5 ARASINDA SECMEK ISTEDIGINIZ ISLEMI SECINIZ\n");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				head=ekle(head);
				break;
			case 2:
				head=sil(head);
				break;
			case 3:
				head=yazdir(head);
				break;
			case 4:
				head=enbasariliogrenci(head);
				break;
			case 5:
				exit(0);
				default:("HATALI ÝÞLEM YAPTINIZ LÜTFEN UYGUN DEÐER GÝRÝNÝZ!!!");
		}
	}
	
	
	
	
	return 0;
}
